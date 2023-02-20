#include<zmq.hpp>
#include<iostream>

#include "sample-server.h"



int main(void)
{
  zmq::context_t *pContext = new zmq::context_t(1);


  SampleServer server(pContext);

  server.reply_bind("tcp://*:5555");
  server.puller_connect("tcp://localhost:5556");
  server.subscriber_connect("tcp://localhost:5557");
  server.subscribe<thunder::Person>();
  server.subscribe<thunder::Entity>();
  while(1){
    server.request_listen<
      SampleServer,
      Req_Res<thunder::Person, thunder::Entity>
    >();

    server.puller_listen<
      SampleServer,
      thunder::Person,
      thunder::Entity
    >();

    server.subscriber_listen<
      SampleServer,
      thunder::Person,
      thunder::Entity
    >();
  }

  return 0;
}