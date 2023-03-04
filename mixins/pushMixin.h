#ifndef PUSHMIXIN_H
#define PUSHMIXIN_H

#include <zmq.hpp>
#include <iostream>
#include <string>
#include <packet.h>

class PushSocket{
  public:
    PushSocket(zmq::context_t *pContext):
      m_pContext(pContext),
      m_pSocket(NULL)
    {}

    ~PushSocket(){
      if(m_pSocket){
        m_pSocket->close();
        delete m_pSocket;
      }
    }

    template <class T>
    void eventLoop(){}

    void pusher_bind(const std::string &address){
      if(m_pSocket){
        m_pSocket->close();
        delete m_pSocket;
      }
      m_pSocket = new zmq::socket_t(*m_pContext, ZMQ_PUSH);
      m_pSocket->bind(address);
    }

    void pusher_connect(const std::string &address){
      if(m_pSocket){
        m_pSocket->close();
        delete m_pSocket;
      }
      m_pSocket = new zmq::socket_t(*m_pContext, ZMQ_PUSH);
      m_pSocket->connect(address);
    }

    template <typename T>
    void push(T &data){
      if(!m_pSocket) return;
      std::unique_ptr<Packet> packet = write_packet<T>(data);
      std::size_t sz = packet->ByteSizeLong();
      std::unique_ptr<char[]> buf = std::make_unique<char[]>(sz);
      if(packet->SerializeToArray(buf.get(), sz)){
        m_pSocket->send(zmq::message_t(buf.get(), sz));
      }
    }

  private:
    zmq::socket_t *m_pSocket;
    zmq::context_t *m_pContext;
};

#endif