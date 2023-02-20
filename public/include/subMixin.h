#ifndef SUBMIXIN_H
#define SUBMIXIN_H

#include <zmq.hpp>
#include <iostream>
#include <unordered_map>
#include <string>
#include <packet.h>
#include <packet.pb.h>

class SubSocket{
  public:
    SubSocket(zmq::context_t *pContext):
      m_pSocket(NULL),
      m_pContext(pContext)
    {}

    template <class T>
    void eventLoop(){}

    template <class H, class M, class ...Args>
    void subscriber_listen(){
      if(!m_pSocket) return;
      zmq::message_t topic;
      zmq::message_t update;
      if(m_pSocket->recv(&topic, ZMQ_RCVMORE)){
        std::cout<<"SubSocket::subscriber_listen"<<std::endl;
        m_pSocket->recv(&update, ZMQ_RCVMORE);
        thunder::Packet packet;
        
        if(packet.ParseFromArray(update.data(), update.size())){
          dispatch_publisher_update<H, M, Args ...>(packet);
        }
      }
    }

    void subscriber_connect(const char* address){
      if(!m_pSocket){
        m_pSocket = new zmq::socket_t(*m_pContext, ZMQ_SUB);
      }
      m_pSocket->connect(address);
    }

    template<typename T>
    void subscribe(){
      if(!m_pSocket){
        m_pSocket = new zmq::socket_t(*m_pContext, ZMQ_SUB);
      }
      std::string topic = T::descriptor()->full_name();
      m_pSocket->setsockopt(ZMQ_SUBSCRIBE, topic.c_str(), topic.size());
    }

  private:
    template<class H>
    void dispatch_publisher_update(thunder::Packet &packet){}

    template<class H, class M, class ...Args>
    void dispatch_publisher_update(thunder::Packet &packet){
      if( packet.type_name().compare(M::descriptor()->full_name()) != 0 ){
        dispatch_publisher_update<H, Args...>(packet);
        return;
      }
      H *pHandler = static_cast<H*>(this);
      M data;
      read_packet<M>(packet, data);
      pHandler->subscriber_update(data);
    }

    zmq::socket_t *m_pSocket;
    zmq::context_t *m_pContext;
};

#endif