#ifndef PACKET_H
#define PACKET_H

#include "packet.pb.h"

using namespace thunder;

template<typename T>
std::unique_ptr<thunder::Packet> write_packet(T &data){
  size_t sz = data.ByteSizeLong();
  std::unique_ptr<char[]> pBody = std::make_unique<char[]>(sz);
  std::unique_ptr<thunder::Packet> pPacket = std::make_unique<thunder::Packet>();
  data.SerializeToArray(pBody.get(), sz);
  pPacket->set_body(pBody.get(), sz);
  pPacket->set_type_name(T::descriptor()->full_name());
  return pPacket;
}

template<typename T>
void read_packet(thunder::Packet &packet, T &obj){
  obj.ParseFromArray(packet.body().c_str(), packet.body().size());
}

#endif