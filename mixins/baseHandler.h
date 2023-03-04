#ifndef BASEHANDLER_H
#define BASEHANDLER_H

// template <typename M> //M is the message type
// class BaseListener: public M{
//   public:
//     BaseSink(const char* server_address):
//       m_serverAddress(server_address)
//     {}

//     void initialize(){

//     }

//     SampleMessage::MSG1 topic;
//     emplate <class H>
//     bool decodeMessage(const Packet &packet, H *pHandler){
//       return false;
//     }

//     template<class H>
//     void service(const M &data){
//       if(M::id != packet._msgHdr) return;
//       H *pHandler = static_cast<H*> this;
//       pHandler->update(data);
//       return true;
//     }

//   private:
//     std::string m_serverAddress;
// };

#endif