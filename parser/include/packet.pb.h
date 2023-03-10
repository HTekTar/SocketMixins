// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#ifndef PROTOBUF_packet_2eproto__INCLUDED
#define PROTOBUF_packet_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace thunder {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_packet_2eproto();
void protobuf_InitDefaults_packet_2eproto();
void protobuf_AssignDesc_packet_2eproto();
void protobuf_ShutdownFile_packet_2eproto();

class Packet;

// ===================================================================

class Packet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:thunder.Packet) */ {
 public:
  Packet();
  virtual ~Packet();

  Packet(const Packet& from);

  inline Packet& operator=(const Packet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Packet& default_instance();

  static const Packet* internal_default_instance();

  void Swap(Packet* other);

  // implements Message ----------------------------------------------

  inline Packet* New() const { return New(NULL); }

  Packet* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Packet& from);
  void MergeFrom(const Packet& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Packet* other);
  void UnsafeMergeFrom(const Packet& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string type_name = 1;
  bool has_type_name() const;
  void clear_type_name();
  static const int kTypeNameFieldNumber = 1;
  const ::std::string& type_name() const;
  void set_type_name(const ::std::string& value);
  void set_type_name(const char* value);
  void set_type_name(const char* value, size_t size);
  ::std::string* mutable_type_name();
  ::std::string* release_type_name();
  void set_allocated_type_name(::std::string* type_name);

  // optional uint32 topic = 2;
  bool has_topic() const;
  void clear_topic();
  static const int kTopicFieldNumber = 2;
  ::google::protobuf::uint32 topic() const;
  void set_topic(::google::protobuf::uint32 value);

  // required bytes body = 3;
  bool has_body() const;
  void clear_body();
  static const int kBodyFieldNumber = 3;
  const ::std::string& body() const;
  void set_body(const ::std::string& value);
  void set_body(const char* value);
  void set_body(const void* value, size_t size);
  ::std::string* mutable_body();
  ::std::string* release_body();
  void set_allocated_body(::std::string* body);

  // @@protoc_insertion_point(class_scope:thunder.Packet)
 private:
  inline void set_has_type_name();
  inline void clear_has_type_name();
  inline void set_has_topic();
  inline void clear_has_topic();
  inline void set_has_body();
  inline void clear_has_body();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr type_name_;
  ::google::protobuf::internal::ArenaStringPtr body_;
  ::google::protobuf::uint32 topic_;
  friend void  protobuf_InitDefaults_packet_2eproto_impl();
  friend void  protobuf_AddDesc_packet_2eproto_impl();
  friend void protobuf_AssignDesc_packet_2eproto();
  friend void protobuf_ShutdownFile_packet_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Packet> Packet_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Packet

// required string type_name = 1;
inline bool Packet::has_type_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Packet::set_has_type_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Packet::clear_has_type_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Packet::clear_type_name() {
  type_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_type_name();
}
inline const ::std::string& Packet::type_name() const {
  // @@protoc_insertion_point(field_get:thunder.Packet.type_name)
  return type_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Packet::set_type_name(const ::std::string& value) {
  set_has_type_name();
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:thunder.Packet.type_name)
}
inline void Packet::set_type_name(const char* value) {
  set_has_type_name();
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:thunder.Packet.type_name)
}
inline void Packet::set_type_name(const char* value, size_t size) {
  set_has_type_name();
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:thunder.Packet.type_name)
}
inline ::std::string* Packet::mutable_type_name() {
  set_has_type_name();
  // @@protoc_insertion_point(field_mutable:thunder.Packet.type_name)
  return type_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Packet::release_type_name() {
  // @@protoc_insertion_point(field_release:thunder.Packet.type_name)
  clear_has_type_name();
  return type_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Packet::set_allocated_type_name(::std::string* type_name) {
  if (type_name != NULL) {
    set_has_type_name();
  } else {
    clear_has_type_name();
  }
  type_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type_name);
  // @@protoc_insertion_point(field_set_allocated:thunder.Packet.type_name)
}

// optional uint32 topic = 2;
inline bool Packet::has_topic() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Packet::set_has_topic() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Packet::clear_has_topic() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Packet::clear_topic() {
  topic_ = 0u;
  clear_has_topic();
}
inline ::google::protobuf::uint32 Packet::topic() const {
  // @@protoc_insertion_point(field_get:thunder.Packet.topic)
  return topic_;
}
inline void Packet::set_topic(::google::protobuf::uint32 value) {
  set_has_topic();
  topic_ = value;
  // @@protoc_insertion_point(field_set:thunder.Packet.topic)
}

// required bytes body = 3;
inline bool Packet::has_body() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Packet::set_has_body() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Packet::clear_has_body() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Packet::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_body();
}
inline const ::std::string& Packet::body() const {
  // @@protoc_insertion_point(field_get:thunder.Packet.body)
  return body_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Packet::set_body(const ::std::string& value) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:thunder.Packet.body)
}
inline void Packet::set_body(const char* value) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:thunder.Packet.body)
}
inline void Packet::set_body(const void* value, size_t size) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:thunder.Packet.body)
}
inline ::std::string* Packet::mutable_body() {
  set_has_body();
  // @@protoc_insertion_point(field_mutable:thunder.Packet.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Packet::release_body() {
  // @@protoc_insertion_point(field_release:thunder.Packet.body)
  clear_has_body();
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Packet::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    set_has_body();
  } else {
    clear_has_body();
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:thunder.Packet.body)
}

inline const Packet* Packet::internal_default_instance() {
  return &Packet_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace thunder

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_packet_2eproto__INCLUDED
