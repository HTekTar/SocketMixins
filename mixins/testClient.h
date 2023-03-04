#ifndef TESTCLIENT_H
#define TESTCLIENT_H

#include <zmq.hpp>
#include <filter.h>
#include <requestMixin.h>
#include <sampleData.h>

class SampleClient: public Filter<ReqSocket>
{
  public:
    SampleClient(zmq::context_t *pContext): Filter<ReqSocket>(pContext){}

    void service(SampleData &data){
      std::cout<<"data.floatData = "<<data._floatData<<"data.intData = "<<data._intData<<std::endl;
      data._floatData *= 2;
      data._intData += 100;
      Packet packet = writePacket<SampleData>(data);
      sendRequest("tcp://localhost:5555" ,packet);
    }
    void service(SimpleData &data){
      std::cout<<"data._str "<<data._str<<" data.sd.floatData = "<<data._sd._floatData<<" data.sd.intData = "<<data._sd._intData<<std::endl;
    }

    void handle(Packet &packet){
      std::cout<<"SampleHandler::handle"<<std::endl;
      if(!decodeMessage<SampleClient, SampleData, SimpleData>(packet, this)){
        std::cout<<"Messoage could not be handled"<<std::endl;
      }
    }

    void execute(){
      SampleData data;
      data._floatData = 1.4f; data._intData = 4;
      Packet packet = writePacket<SampleData>(data);
      
      sendRequest("tcp://localhost:5555", packet);
      while(1){
        run<SampleClient>();
      }
    }
};

#endif
