#ifndef SUBMIXIN_H
#define SUBMIXIN_H

#include <memory>
#include <vector>
#include <zmq.hpp>
#include <iostream>
#include <unordered_map>
#include <string>
#include <packet.h>
#include <packet.pb.h>

class SubSocket{
  public:
    SubSocket(
      zmq::context_t *pContext, 
      std::vector<std::string> addresses,
      std::vector<std::string> topics){
      m_subSocket = std::make_unique<zmq::socket_t>(pContext, ZMQ_SUB);
      for(auto address: addresses){
        m_subSocket->connect(address.c_str());
      }
      for(auto topic: topics){
        m_subSocket->setsockopt(ZMQ_SUBSCRIBE, topic.c_str(), topic.size());
      }
    }

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
  private:
    zmq::socket_t *m_pSocket;
    zmq::context_t *m_pContext;
    std::unique_ptr<zmq::socket_t> m_subSocket;
};

#endif