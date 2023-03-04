#ifndef FILTER_H
#define FILTER_H

#include <memory>
#include <unordered_map>
#include <vector>
#include <zmq.hpp>

#include "nodeConfig.h"
// #include <iostream>

template <class ...Mixins>
class Filter: public Mixins...{
  public:
    Filter(zmq::context_t *pContext, const NodeCfg &cfg):
      Mixins(pContext, cfg)..., 
      m_zmqContext(pContext)
      {}

    template <typename T>
    void run(){
      ( this-> Mixins:: template eventLoop<T>(), ...);      
    }

    template<class H, class M, class ...Args>
    void dispatch_message(thunder::Packet &packet){
      if( packet.type_name().compare(M::descriptor()->full_name()) != 0 ){
        dispatch_publisher_update<H, Args...>(packet);
        return;
      }
      H *pHandler = static_cast<H*>(this);
      M data;
      read_packet<M>(packet, data);
      pHandler->subscriber_update(data);
    }
  protected:
    unique_ptr<zmq::context_t> m_zmqContext;
};
#endif