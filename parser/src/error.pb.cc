// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: error.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "error.pb.h"

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

const ::google::protobuf::Descriptor* Error_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Error_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_error_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_error_2eproto() {
  protobuf_AddDesc_error_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "error.proto");
  GOOGLE_CHECK(file != NULL);
  Error_descriptor_ = file->message_type(0);
  static const int Error_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Error, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Error, code_),
  };
  Error_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Error_descriptor_,
      Error::internal_default_instance(),
      Error_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Error, _has_bits_),
      -1,
      -1,
      sizeof(Error),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Error, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_error_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Error_descriptor_, Error::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_error_2eproto() {
  Error_default_instance_.Shutdown();
  delete Error_reflection_;
}

void protobuf_InitDefaults_error_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  Error_default_instance_.DefaultConstruct();
  Error_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_error_2eproto_once_);
void protobuf_InitDefaults_error_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_error_2eproto_once_,
                 &protobuf_InitDefaults_error_2eproto_impl);
}
void protobuf_AddDesc_error_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_error_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013error.proto\022\007thunder\"&\n\005Error\022\017\n\007messa"
    "ge\030\001 \002(\t\022\014\n\004code\030\002 \001(\r", 62);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "error.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_error_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_error_2eproto_once_);
void protobuf_AddDesc_error_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_error_2eproto_once_,
                 &protobuf_AddDesc_error_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_error_2eproto {
  StaticDescriptorInitializer_error_2eproto() {
    protobuf_AddDesc_error_2eproto();
  }
} static_descriptor_initializer_error_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Error::kMessageFieldNumber;
const int Error::kCodeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Error::Error()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_error_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:thunder.Error)
}

void Error::InitAsDefaultInstance() {
}

Error::Error(const Error& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:thunder.Error)
}

void Error::SharedCtor() {
  _cached_size_ = 0;
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  code_ = 0u;
}

Error::~Error() {
  // @@protoc_insertion_point(destructor:thunder.Error)
  SharedDtor();
}

void Error::SharedDtor() {
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Error::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Error::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Error_descriptor_;
}

const Error& Error::default_instance() {
  protobuf_InitDefaults_error_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Error> Error_default_instance_;

Error* Error::New(::google::protobuf::Arena* arena) const {
  Error* n = new Error;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Error::Clear() {
// @@protoc_insertion_point(message_clear_start:thunder.Error)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_message()) {
      message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    code_ = 0u;
  }
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Error::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:thunder.Error)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string message = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "thunder.Error.message");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_code;
        break;
      }

      // optional uint32 code = 2;
      case 2: {
        if (tag == 16) {
         parse_code:
          set_has_code();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &code_)));
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
  // @@protoc_insertion_point(parse_success:thunder.Error)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:thunder.Error)
  return false;
#undef DO_
}

void Error::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:thunder.Error)
  // required string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "thunder.Error.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->message(), output);
  }

  // optional uint32 code = 2;
  if (has_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->code(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:thunder.Error)
}

::google::protobuf::uint8* Error::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:thunder.Error)
  // required string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "thunder.Error.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }

  // optional uint32 code = 2;
  if (has_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->code(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:thunder.Error)
  return target;
}

size_t Error::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:thunder.Error)
  size_t total_size = 0;

  // required string message = 1;
  if (has_message()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }
  // optional uint32 code = 2;
  if (has_code()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->code());
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

void Error::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:thunder.Error)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Error* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Error>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:thunder.Error)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:thunder.Error)
    UnsafeMergeFrom(*source);
  }
}

void Error::MergeFrom(const Error& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:thunder.Error)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Error::UnsafeMergeFrom(const Error& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_message()) {
      set_has_message();
      message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
    }
    if (from.has_code()) {
      set_code(from.code());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void Error::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:thunder.Error)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Error::CopyFrom(const Error& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:thunder.Error)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Error::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Error::Swap(Error* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Error::InternalSwap(Error* other) {
  message_.Swap(&other->message_);
  std::swap(code_, other->code_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Error::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Error_descriptor_;
  metadata.reflection = Error_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Error

// required string message = 1;
bool Error::has_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Error::set_has_message() {
  _has_bits_[0] |= 0x00000001u;
}
void Error::clear_has_message() {
  _has_bits_[0] &= ~0x00000001u;
}
void Error::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_message();
}
const ::std::string& Error::message() const {
  // @@protoc_insertion_point(field_get:thunder.Error.message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Error::set_message(const ::std::string& value) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:thunder.Error.message)
}
void Error::set_message(const char* value) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:thunder.Error.message)
}
void Error::set_message(const char* value, size_t size) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:thunder.Error.message)
}
::std::string* Error::mutable_message() {
  set_has_message();
  // @@protoc_insertion_point(field_mutable:thunder.Error.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Error::release_message() {
  // @@protoc_insertion_point(field_release:thunder.Error.message)
  clear_has_message();
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Error::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    set_has_message();
  } else {
    clear_has_message();
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:thunder.Error.message)
}

// optional uint32 code = 2;
bool Error::has_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Error::set_has_code() {
  _has_bits_[0] |= 0x00000002u;
}
void Error::clear_has_code() {
  _has_bits_[0] &= ~0x00000002u;
}
void Error::clear_code() {
  code_ = 0u;
  clear_has_code();
}
::google::protobuf::uint32 Error::code() const {
  // @@protoc_insertion_point(field_get:thunder.Error.code)
  return code_;
}
void Error::set_code(::google::protobuf::uint32 value) {
  set_has_code();
  code_ = value;
  // @@protoc_insertion_point(field_set:thunder.Error.code)
}

inline const Error* Error::internal_default_instance() {
  return &Error_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace thunder

// @@protoc_insertion_point(global_scope)
