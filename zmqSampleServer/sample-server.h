#ifndef SAMPLESERVER_H
#define SAMPLESERVER_H

#include <zmq.hpp>
#include <filter.h>
#include <replyMixin.h>
#include <pullMixin.h>
#include <subMixin.h>
#include <packet.h>
#include <sample-data.pb.h>

class SampleServer: public Filter<SubSocket, PullSocket, RepSocket> {
  public:
    SampleServer(zmq::context_t *pContext);
    // Packet handleRequest(Packet &packet);
    // void service(const SampleData &data);
    // void service(const SimpleData &data);
    // SampleData serve(SampleData &data);
    void serve(thunder::Person &data, thunder::Entity &entity);
    void pull(thunder::Person &data);
    void pull(thunder::Entity &data);
    void subscriber_update(thunder::Person &data);
    void subscriber_update(thunder::Entity &data);
};

#endif
