#ifndef PUBMIXIN_H
#define PUBMIXIN_H

#include <zmq.hpp>
#include <iostream>
#include <unordered_map>
#include <string>
#include <packet.h>
#include <../protobuf/packet.pb.h>

class PubSocket{


  public:
    PubSocket(zmq::context_t *pContext):
      m_pSocket(NULL),
      m_pContext(pContext)
    {}

    template <class T>
    void eventLoop(){}

    void publisher_bind(const char* address){
      if(m_pSocket){
        m_pSocket->close();
        delete m_pSocket;
      }
      m_pSocket = new zmq::socket_t(*m_pContext, ZMQ_PUB);
      m_pSocket->bind(address);
    }

    template<typename T>
    void publish(T &data){
      std::string topic = T::descriptor()->full_name();
      thunder::Packet packet;
      m_pSocket->send(zmq::message_t(topic.c_str(), topic.size()), ZMQ_SNDMORE); //TODO: topic stuff
      std::unique_ptr<thunder::Packet> pPacket = write_packet<T>(data);

      std::size_t sz = pPacket->ByteSizeLong();
      std::unique_ptr<char []> buf = std::make_unique<char []>(sz);

      if(pPacket->SerializeToArray(buf.get(), sz)){
        m_pSocket->send(zmq::message_t(buf.get(), sz));
      }
    }

  private:
    zmq::socket_t *m_pSocket;
    zmq::context_t *m_pContext;
};

#endif