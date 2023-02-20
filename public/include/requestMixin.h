#ifndef REQUESTMIXIN_H
#define REQUESTMIXIN_H

#include <zmq.hpp>
#include <iostream>
#include <unordered_map>
#include <string>
#include <packet.h>
#include <error.pb.h>

class ReqSocket{
  typedef std::unordered_map<std::string, zmq::socket_t*> ServerMap;

  public:
    ReqSocket(zmq::context_t *pContext):
      m_pContext(pContext),
      m_pReqSocket(NULL)
    {}

    ~ReqSocket(){
      if(m_serverMap.size() > 0){
        ServerMap::iterator itr = m_serverMap.begin();
        while(itr != m_serverMap.end()){
          itr->second->close();
          delete itr->second;
          itr++;
        }
      }
    }

    void connectToServer(const std::string &addr){
      if(m_serverMap.find(addr) == m_serverMap.end()){
        m_pReqSocket = new zmq::socket_t(*m_pContext, ZMQ_REQ);
        m_pReqSocket->connect(addr);
        m_serverMap[std::string(addr)] = m_pReqSocket;
      }
    }
    
    template <class T>
    void eventLoop(){}

    template<typename R, typename S>
    S send_request(const std::string &addr, R &data){
      // if(m_pReqSocket) return;
      if(m_serverMap.find(addr) == m_serverMap.end()){
        std::cout<<"hhh"<<std::endl;
        m_pReqSocket = new zmq::socket_t(*m_pContext, ZMQ_REQ);
        m_pReqSocket->connect(addr);
        m_serverMap[std::string(addr)] = m_pReqSocket;
      }
      std::unique_ptr<Packet> req = write_packet<R>(data);
      std::size_t sz = req->ByteSizeLong();
      std::unique_ptr<char[]> buf = std::make_unique<char[]>(sz);
      m_pReqSocket = m_serverMap[addr];
      req->SerializeToArray(buf.get(), sz);
      m_pReqSocket->send(zmq::message_t(buf.get(), sz));
      zmq::message_t msg; 
      m_pReqSocket->recv(msg);
      Packet reply;
      S res;
      read_packet<S>(reply, res);
      return res;
    }
  private:
    zmq::context_t *m_pContext;
    zmq::socket_t *m_pReqSocket;
    bool m_reqSent;
    ServerMap m_serverMap;

};

#endif