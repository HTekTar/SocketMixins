#ifndef REPLYMIXIN_H
#define REPLYMIXIN_H

#include <zmq.hpp>
#include <iostream>
#include <unordered_map>
#include <string>
#include <packet.h>
#include <packet.pb.h>
#include <error.pb.h>

template<typename Rq, typename Rs>
struct Req_Res{
  using Req = Rq;
  using Res = Rs;
};

class RepSocket{
  public:
    RepSocket(zmq::context_t *pContext):
      m_pContext(pContext),
      m_pSocket(NULL)
    {}

    ~RepSocket(){
      if(m_pSocket) {
        m_pSocket->close();
        delete m_pSocket;
      }
    }

    void reply_bind(const char* addr){
      if(m_pSocket){
        m_pSocket->close();
        delete m_pSocket;
      }
      m_pSocket = new zmq::socket_t(*m_pContext, ZMQ_REP);
      m_pSocket->setsockopt(ZMQ_RCVTIMEO, 10000);
      m_pSocket->setsockopt(ZMQ_LINGER, 0);
      // std::cout<<"RepSocket::setRequestServerAddress"<<std::endl;
      m_pSocket->bind(addr);
    }

    template <typename T>
    void eventLoop(){}

    template<class H, class T, class... Args>
    void request_listen(){
      if(!m_pSocket) return;
      zmq::message_t msg;
      if(!m_pSocket->recv(&msg, ZMQ_NOBLOCK)){
        return;
      }
      
      Packet packet;
      packet.ParseFromArray(msg.data(), msg.size());
      
      // std::unique_ptr<thunder::Packet> resPacket = dispatch_request<H, T, Args...>(packet);
      thunder::Error err;
      err.set_code(404);
      err.set_message("request service not found");
      std::unique_ptr<thunder::Packet> resPacket = write_packet<thunder::Error>(err);
      std::size_t sz = resPacket->ByteSizeLong();
      std::unique_ptr<char[]> buf = std::make_unique<char[]>(sz);
      resPacket->SerializeToArray(buf.get(), sz);
      m_pSocket->send(zmq::message_t(buf.get(), sz));
    }

  private:
    template <class H>
    std::unique_ptr<thunder::Packet> dispatch_request(thunder::Packet &packet){
      thunder::Error err;
      err.set_code(404);
      err.set_message("request service not found");
      return write_packet<thunder::Error>(err);
    }

    template<class H, class T, class... Args>
    std::unique_ptr<thunder::Packet>  dispatch_request(Packet &packet){
      if(packet.type_name().compare(T::Req::descriptor()->full_name()) != 0 ) {
        return dispatch_request<H, Args...>(packet);
      }
      H *pServer = static_cast<H*>(this);
      typename T::Req req;
      read_packet<typename T::Req>(packet, req);
      typename T::Res res;
      pServer->serve(req, res);
      return write_packet<typename T::Res>(res);
    }

    zmq::socket_t *m_pSocket;
    zmq::context_t *m_pContext;
};

#endif