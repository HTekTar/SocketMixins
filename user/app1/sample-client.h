#ifndef SAMPLECLIENT_H
#define SAMPLECLIENT_H

#include "zmq.hpp"
#include <filter.h>
#include <requestMixin.h>
#include <pushMixin.h>
#include <pubMixin.h>

class SampleClient: public Filter<PubSocket, PushSocket, ReqSocket>{
  public:
    SampleClient(zmq::context_t *pContext);
};


#endif
