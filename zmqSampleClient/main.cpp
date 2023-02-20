#include "sample-client.h"
#include "sample-data.pb.h"

template<typename T>
void setPBPacket(thunder::Packet *pPacket, T *pMessage){
  pPacket->set_type_name(T::descriptor()->full_name());
  pPacket->set_body(pMessage->SerializeAsString());
}

template<typename T>
thunder::Packet create_pb_packet(T &message){
  thunder::Packet packet;
  packet.set_type_name(T::descriptor()->full_name());
  packet.set_body(message.SerializeAsString());
}

template<typename T>
void read_pb_packate(thunder::Packet &packet, T &message){
  message.ParseFromString(packet.body());
}

thunder::Entity getEntity(){
  thunder::Entity entity;
  thunder::Entity_Position pos;
  pos.set_x(2.0);
  pos.set_y(3.2);
  pos.set_z(4.3);

  thunder::Entity_Sensor sensor;
  sensor.add_beam_width(3.0);
  sensor.set_range(50.0);

  entity.set_allocated_pos(&pos);
  entity.set_allocated_sensor(&sensor);
  entity.set_id(2493);
  return entity;
}

int main (void)
{
  zmq::context_t *pContext = new zmq::context_t(1);
  SampleClient client(pContext);
  client.pusher_bind("tcp://*:5556");
  client.publisher_bind("tcp://*:5557");

  thunder::Person person;
  person.set_name("Henok Teka");
  person.set_email("zosjared@gmail.com");
  person.set_id(243);

  thunder::Entity e = getEntity();
  std::cout<<e.pos().x()<<std::endl;
  
  for(int i=0; i< 10; ++i){
    thunder::Entity reply = client.send_request<thunder::Person, thunder::Entity>("tcp://localhost:5555", person);
  //   // std::cout<<reply._floatData<<" "<<reply._intData<<std::endl;
    // client.push<thunder::Entity>(entity);
    // client.publish<thunder::Person>(person);
    // client.publish<thunder::Entity>(entity);
  }

  

  // thunder::Person person2;
  // person2.ParseFromString(person.SerializeAsString());

  // std::cout<<person2.email()<<std::endl;
  // const ::google::protobuf::Descriptor *pDescritor = thunder::Person::descriptor();
  // std::cout<<pDescritor->full_name().c_str()<<std::endl;

  // thunder::Packet packet = create_pb_packet<thunder::Person>(person);

  // thunder::Packet packet;
  // setPBPacket<thunder::Person>(&packet, &person);

  // std::cout<<packet.type_name()<<" : " <<packet.body()<<std::endl;

  // read_pb_packate<thunder::Person>(packet, person2);
  // std::cout<<person2.email()<<" "<<person2.id()<<std::endl;
  return 0;
}