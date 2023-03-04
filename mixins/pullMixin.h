#ifndef PULLMIXIN_H
#define PULLMIXIN_H

#include <zmq.hpp>
#include <iostream>
#include <unordered_map>
#include <string>
#include <packet.h>

class PullSocket{
  public:
    PullSocket(zmq::context_t *pContext):
      m_pSocket(NULL),
      m_pContext(pContext)
    {}

    template <class T>
    void eventLoop(){}

    void puller_connect(const std::string &address){
      if(m_pSocket){
        m_pSocket->close();
        delete m_pSocket;
      }
      m_pSocket = new zmq::socket_t(*m_pContext, ZMQ_PULL);
      m_pSocket->connect(address);
    }

    void puller_bind(const std::string &address){
      if(m_pSocket){
        m_pSocket->close();
        delete m_pSocket;
      }
      m_pSocket = new zmq::socket_t(*m_pContext, ZMQ_PULL);
      m_pSocket->bind(address);
    }

    template<class H, class D, class ...Args>
    void puller_listen(){
      if(!m_pSocket) return;
      zmq::message_t msg;
      if(!m_pSocket->recv(&msg, ZMQ_NOBLOCK)){
        return;
      }
      std::cout<<"PullSocket::pull_data"<<std::endl;
      Packet packet;
      packet.ParseFromArray(msg.data(), msg.size());
      dispatch_source_data<H, D, Args...>(packet);
    }

  private:
    template<class H>
    void dispatch_source_data(Packet &packet){}

    template<class H, class D, class ...Args>
    void dispatch_source_data(Packet &packet){
      if(packet.type_name().compare(D::descriptor()->full_name()) != 0 ){
        dispatch_source_data<H, Args...>(packet);
        return;
      }
      H* pHandler = static_cast<H*>(this);
      D data;
      read_packet<D>(packet, data);
      pHandler->pull(data);
    }

    zmq::socket_t *m_pSocket;
    zmq::context_t *m_pContext;
};

#endif