// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace thunder {

namespace {

const ::google::protobuf::Descriptor* Packet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Packet_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_packet_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_packet_2eproto() {
  protobuf_AddDesc_packet_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "packet.proto");
  GOOGLE_CHECK(file != NULL);
  Packet_descriptor_ = file->message_type(0);
  static const int Packet_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, type_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, topic_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, body_),
  };
  Packet_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Packet_descriptor_,
      Packet::internal_default_instance(),
      Packet_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _has_bits_),
      -1,
      -1,
      sizeof(Packet),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_packet_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Packet_descriptor_, Packet::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_packet_2eproto() {
  Packet_default_instance_.Shutdown();
  delete Packet_reflection_;
}

void protobuf_InitDefaults_packet_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  Packet_default_instance_.DefaultConstruct();
  Packet_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_packet_2eproto_once_);
void protobuf_InitDefaults_packet_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_packet_2eproto_once_,
                 &protobuf_InitDefaults_packet_2eproto_impl);
}
void protobuf_AddDesc_packet_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_packet_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014packet.proto\022\007thunder\"8\n\006Packet\022\021\n\ttyp"
    "e_name\030\001 \002(\t\022\r\n\005topic\030\002 \001(\r\022\014\n\004body\030\003 \002("
    "\014", 81);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "packet.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_packet_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_packet_2eproto_once_);
void protobuf_AddDesc_packet_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_packet_2eproto_once_,
                 &protobuf_AddDesc_packet_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_packet_2eproto {
  StaticDescriptorInitializer_packet_2eproto() {
    protobuf_AddDesc_packet_2eproto();
  }
} static_descriptor_initializer_packet_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Packet::kTypeNameFieldNumber;
const int Packet::kTopicFieldNumber;
const int Packet::kBodyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Packet::Packet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_packet_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:thunder.Packet)
}

void Packet::InitAsDefaultInstance() {
}

Packet::Packet(const Packet& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:thunder.Packet)
}

void Packet::SharedCtor() {
  _cached_size_ = 0;
  type_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  body_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  topic_ = 0u;
}

Packet::~Packet() {
  // @@protoc_insertion_point(destructor:thunder.Packet)
  SharedDtor();
}

void Packet::SharedDtor() {
  type_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  body_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Packet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Packet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Packet_descriptor_;
}

const Packet& Packet::default_instance() {
  protobuf_InitDefaults_packet_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Packet> Packet_default_instance_;

Packet* Packet::New(::google::protobuf::Arena* arena) const {
  Packet* n = new Packet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Packet::Clear() {
// @@protoc_insertion_point(message_clear_start:thunder.Packet)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_type_name()) {
      type_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    topic_ = 0u;
    if (has_body()) {
      body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Packet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:thunder.Packet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string type_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->type_name().data(), this->type_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "thunder.Packet.type_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_topic;
        break;
      }

      // optional uint32 topic = 2;
      case 2: {
        if (tag == 16) {
         parse_topic:
          set_has_topic();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &topic_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_body;
        break;
      }

      // required bytes body = 3;
      case 3: {
        if (tag == 26) {
         parse_body:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_body()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:thunder.Packet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:thunder.Packet)
  return false;
#undef DO_
}

void Packet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:thunder.Packet)
  // required string type_name = 1;
  if (has_type_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type_name().data(), this->type_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "thunder.Packet.type_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->type_name(), output);
  }

  // optional uint32 topic = 2;
  if (has_topic()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->topic(), output);
  }

  // required bytes body = 3;
  if (has_body()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->body(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:thunder.Packet)
}

::google::protobuf::uint8* Packet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:thunder.Packet)
  // required string type_name = 1;
  if (has_type_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type_name().data(), this->type_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "thunder.Packet.type_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->type_name(), target);
  }

  // optional uint32 topic = 2;
  if (has_topic()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->topic(), target);
  }

  // required bytes body = 3;
  if (has_body()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->body(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:thunder.Packet)
  return target;
}

size_t Packet::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:thunder.Packet)
  size_t total_size = 0;

  if (has_type_name()) {
    // required string type_name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type_name());
  }

  if (has_body()) {
    // required bytes body = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->body());
  }

  return total_size;
}
size_t Packet::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:thunder.Packet)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000005) ^ 0x00000005) == 0) {  // All required fields are present.
    // required string type_name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type_name());

    // required bytes body = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->body());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional uint32 topic = 2;
  if (has_topic()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->topic());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Packet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:thunder.Packet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Packet* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Packet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:thunder.Packet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:thunder.Packet)
    UnsafeMergeFrom(*source);
  }
}

void Packet::MergeFrom(const Packet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:thunder.Packet)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Packet::UnsafeMergeFrom(const Packet& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type_name()) {
      set_has_type_name();
      type_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_name_);
    }
    if (from.has_topic()) {
      set_topic(from.topic());
    }
    if (from.has_body()) {
      set_has_body();
      body_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.body_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void Packet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:thunder.Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Packet::CopyFrom(const Packet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:thunder.Packet)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Packet::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;

  return true;
}

void Packet::Swap(Packet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Packet::InternalSwap(Packet* other) {
  type_name_.Swap(&other->type_name_);
  std::swap(topic_, other->topic_);
  body_.Swap(&other->body_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Packet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Packet_descriptor_;
  metadata.reflection = Packet_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Packet

// required string type_name = 1;
bool Packet::has_type_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Packet::set_has_type_name() {
  _has_bits_[0] |= 0x00000001u;
}
void Packet::clear_has_type_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void Packet::clear_type_name() {
  type_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_type_name();
}
const ::std::string& Packet::type_name() const {
  // @@protoc_insertion_point(field_get:thunder.Packet.type_name)
  return type_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Packet::set_type_name(const ::std::string& value) {
  set_has_type_name();
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:thunder.Packet.type_name)
}
void Packet::set_type_name(const char* value) {
  set_has_type_name();
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:thunder.Packet.type_name)
}
void Packet::set_type_name(const char* value, size_t size) {
  set_has_type_name();
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:thunder.Packet.type_name)
}
::std::string* Packet::mutable_type_name() {
  set_has_type_name();
  // @@protoc_insertion_point(field_mutable:thunder.Packet.type_name)
  return type_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Packet::release_type_name() {
  // @@protoc_insertion_point(field_release:thunder.Packet.type_name)
  clear_has_type_name();
  return type_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Packet::set_allocated_type_name(::std::string* type_name) {
  if (type_name != NULL) {
    set_has_type_name();
  } else {
    clear_has_type_name();
  }
  type_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type_name);
  // @@protoc_insertion_point(field_set_allocated:thunder.Packet.type_name)
}

// optional uint32 topic = 2;
bool Packet::has_topic() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Packet::set_has_topic() {
  _has_bits_[0] |= 0x00000002u;
}
void Packet::clear_has_topic() {
  _has_bits_[0] &= ~0x00000002u;
}
void Packet::clear_topic() {
  topic_ = 0u;
  clear_has_topic();
}
::google::protobuf::uint32 Packet::topic() const {
  // @@protoc_insertion_point(field_get:thunder.Packet.topic)
  return topic_;
}
void Packet::set_topic(::google::protobuf::uint32 value) {
  set_has_topic();
  topic_ = value;
  // @@protoc_insertion_point(field_set:thunder.Packet.topic)
}

// required bytes body = 3;
bool Packet::has_body() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Packet::set_has_body() {
  _has_bits_[0] |= 0x00000004u;
}
void Packet::clear_has_body() {
  _has_bits_[0] &= ~0x00000004u;
}
void Packet::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_body();
}
const ::std::string& Packet::body() const {
  // @@protoc_insertion_point(field_get:thunder.Packet.body)
  return body_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Packet::set_body(const ::std::string& value) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:thunder.Packet.body)
}
void Packet::set_body(const char* value) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:thunder.Packet.body)
}
void Packet::set_body(const void* value, size_t size) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:thunder.Packet.body)
}
::std::string* Packet::mutable_body() {
  set_has_body();
  // @@protoc_insertion_point(field_mutable:thunder.Packet.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Packet::release_body() {
  // @@protoc_insertion_point(field_release:thunder.Packet.body)
  clear_has_body();
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Packet::set_allocated_body(::std::string* body) {
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
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace thunder

// @@protoc_insertion_point(global_scope)
