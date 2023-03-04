#ifndef TESTSERVER_H
#define TESTSERVER_H

#include <zmq.hpp>
#include <filter.h>
#include <replyMixin.h>
#include <sampleData.h>
#include <packet.h>

class SampleHandler: public Filter<RepSocket>
{
  public:
    SampleHandler(zmq::context_t *pContext): Filter<RepSocket>(pContext){}

    Packet service(SampleData &data){
      std::cout<<"data.floatData = "<<data._floatData<<"data.intData = "<<data._intData<<std::endl;
      data._floatData *= 2;
      data._intData += 100;
      Packet packet = writePacket<SampleData>(data);
      return packet;
    }
    void service(SimpleData &data){
      std::cout<<"data._str "<<data._str<<" data.sd.floatData = "<<data._sd._floatData<<" data.sd.intData = "<<data._sd._intData<<std::endl;
    }

    void handle(Packet &packet){
      std::cout<<"SampleHandler::handle"<<std::endl;
      if(!decodeMessage<
        SampleHandler, 
        SampleData, 
        SimpleData>
      (packet, this)){
        std::cout<<"Messoage could not be handled"<<std::endl;
      }
    }
};

#endif