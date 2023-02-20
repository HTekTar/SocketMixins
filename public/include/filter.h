#include <zmq.hpp>
// #include <iostream>

#ifndef FILTER_H
#define FILTER_H
template <class ...Mixins>
class Filter: public Mixins...{
  public:
    Filter(zmq::context_t *pContext):
      Mixins(pContext)..., 
      m_pContext(pContext)
      {}

    template <typename T>
    void run(){
      ( this-> Mixins:: template eventLoop<T>(), ...);      
    }
  protected:
    zmq::context_t *m_pContext;
    // char buffer[1024];
};
#endif