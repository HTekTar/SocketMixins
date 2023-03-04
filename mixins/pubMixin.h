#ifndef PUBMIXIN_H
#define PUBMIXIN_H

#include <memory>
#include <zmq.hpp>
#include <string>
#include <packet.h>
#include <../protobuf/packet.pb.h>

class PubSocket{


  public:
    PubSocket(const zmq::context_t *pContext, const std::string &address){
      m_socket = std::make_unique<zmq::socket_t>(pContext, ZMQ_PUB);
      m_socket->bind(address.c_str());
    }

    template <class T>
    void eventLoop(){}


    template<typename T>
    void publish(const T &data){
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
    std::unique_ptr<zmq::socket_t> m_socket;
};

#endif