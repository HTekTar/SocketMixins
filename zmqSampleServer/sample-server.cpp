#include "sample-server.h"

SampleServer::SampleServer(zmq::context_t *pContext):
      Filter(pContext){}

// Packet SampleServer::handleRequest(Packet &packet){
//   decodeMessage<
//     SampleServer, 
//     SampleData, 
//     SimpleData
//   >(packet, this);
//   return writePacket<SampleData>(m_reqData);
// }

// void SampleServer::service(const SampleData &data){
//   m_reqData._floatData = 2 * data._floatData;
//   m_reqData._intData = data._intData + 1;
// }

// void SampleServer::service(const SimpleData &data){
//   std::cout<<data._str;
//   m_reqData = data._sd;
// }

// SampleData SampleServer::serve(SampleData &data){
//   data._floatData *= 3.14f;
//   data._intData += 1;
//   return data;
// }

// SampleData SampleServer::serve(SimpleData &data){
//   SampleData res;
//   res._floatData = data._sd._floatData * 3.14;
//   res._intData = data._str;
//   return res;
// }

void SampleServer::serve(thunder::Person &data, thunder::Entity &entity){
  std::cout<<"Person:- name: "<<data.name()<<" id: "<<data.id()<<" email: "<<data.email()<<std::endl;
  thunder::Entity_Position pos;
  thunder::Entity_Sensor sensor;
  pos.set_x(4.2);
  pos.set_y(5.2);
  pos.set_z(3.2);
  sensor.add_beam_width(45.0);
  sensor.set_range(150.0);
  entity.set_allocated_pos(&pos);
  entity.set_allocated_sensor(&sensor);
  entity.set_id(2439);
}

void SampleServer::pull(thunder::Person &data){
  std::cout<<"SampleServer::pull(Person &data)"<<std::endl;
  std::cout<<"Name: "<<data.name()<<std::endl;
}
void SampleServer::pull(thunder::Entity &data){
  std::cout<<"SampleServer::pull(thunder::Entity &data)"<<std::endl;
  std::cout<<"Position: "
    <<data.pos().x()<<", "
    <<data.pos().y()<<", "
    <<data.pos().z()<<", "<<std::endl;
}

void SampleServer::subscriber_update(thunder::Person &data){
  std::cout<<"SampleServer::subscriber_update"<<std::endl;
  std::cout<<"person.name: "<<data.name()<<std::endl;
}

void SampleServer::subscriber_update(thunder::Entity &data){
  printf("Entity id: %d position: (x:%f, y:%f, z:%f) sensor: (range:%f)\n", 
    data.id(), 
    data.pos().x(), 
    data.pos().y(),
    data.pos().z(),
    data.sensor().range()
  );
}
