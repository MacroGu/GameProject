// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/duration.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/duration.pb.h>

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

namespace google {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* Duration_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Duration_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2fduration_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2fduration_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2fduration_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/duration.proto");
  GOOGLE_CHECK(file != NULL);
  Duration_descriptor_ = file->message_type(0);
  static const int Duration_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Duration, seconds_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Duration, nanos_),
  };
  Duration_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Duration_descriptor_,
      Duration::default_instance_,
      Duration_offsets_,
      -1,
      -1,
      -1,
      sizeof(Duration),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Duration, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Duration, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2fduration_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Duration_descriptor_, &Duration::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fduration_2eproto() {
  delete Duration::default_instance_;
  delete Duration_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2fduration_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2fduration_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036google/protobuf/duration.proto\022\017google"
    ".protobuf\"*\n\010Duration\022\017\n\007seconds\030\001 \001(\003\022\r"
    "\n\005nanos\030\002 \001(\005B|\n\023com.google.protobufB\rDu"
    "rationProtoP\001Z*github.com/golang/protobu"
    "f/ptypes/duration\240\001\001\242\002\003GPB\252\002\036Google.Prot"
    "obuf.WellKnownTypesb\006proto3", 227);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/duration.proto", &protobuf_RegisterTypes);
  Duration::default_instance_ = new Duration();
  Duration::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fduration_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fduration_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fduration_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fduration_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fduration_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Duration::kSecondsFieldNumber;
const int Duration::kNanosFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Duration::Duration()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Duration)
}

void Duration::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Duration::Duration(const Duration& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Duration)
}

void Duration::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  seconds_ = GOOGLE_LONGLONG(0);
  nanos_ = 0;
}

Duration::~Duration() {
  // @@protoc_insertion_point(destructor:google.protobuf.Duration)
  SharedDtor();
}

void Duration::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Duration::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Duration::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Duration_descriptor_;
}

const Duration& Duration::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fduration_2eproto();
  return *default_instance_;
}

Duration* Duration::default_instance_ = NULL;

Duration* Duration::New(::google::protobuf::Arena* arena) const {
  Duration* n = new Duration;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Duration::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Duration)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Duration, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Duration*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(seconds_, nanos_);

#undef ZR_HELPER_
#undef ZR_

}

bool Duration::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Duration)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 seconds = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &seconds_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_nanos;
        break;
      }

      // optional int32 nanos = 2;
      case 2: {
        if (tag == 16) {
         parse_nanos:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nanos_)));

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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.Duration)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Duration)
  return false;
#undef DO_
}

void Duration::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Duration)
  // optional int64 seconds = 1;
  if (this->seconds() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->seconds(), output);
  }

  // optional int32 nanos = 2;
  if (this->nanos() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nanos(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Duration)
}

::google::protobuf::uint8* Duration::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Duration)
  // optional int64 seconds = 1;
  if (this->seconds() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->seconds(), target);
  }

  // optional int32 nanos = 2;
  if (this->nanos() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nanos(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Duration)
  return target;
}

int Duration::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Duration)
  int total_size = 0;

  // optional int64 seconds = 1;
  if (this->seconds() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->seconds());
  }

  // optional int32 nanos = 2;
  if (this->nanos() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nanos());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Duration::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Duration)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Duration* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Duration>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Duration)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Duration)
    MergeFrom(*source);
  }
}

void Duration::MergeFrom(const Duration& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Duration)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.seconds() != 0) {
    set_seconds(from.seconds());
  }
  if (from.nanos() != 0) {
    set_nanos(from.nanos());
  }
}

void Duration::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Duration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Duration::CopyFrom(const Duration& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Duration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Duration::IsInitialized() const {

  return true;
}

void Duration::Swap(Duration* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Duration::InternalSwap(Duration* other) {
  std::swap(seconds_, other->seconds_);
  std::swap(nanos_, other->nanos_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Duration::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Duration_descriptor_;
  metadata.reflection = Duration_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Duration

// optional int64 seconds = 1;
void Duration::clear_seconds() {
  seconds_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Duration::seconds() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Duration.seconds)
  return seconds_;
}
 void Duration::set_seconds(::google::protobuf::int64 value) {
  
  seconds_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Duration.seconds)
}

// optional int32 nanos = 2;
void Duration::clear_nanos() {
  nanos_ = 0;
}
 ::google::protobuf::int32 Duration::nanos() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Duration.nanos)
  return nanos_;
}
 void Duration::set_nanos(::google::protobuf::int32 value) {
  
  nanos_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Duration.nanos)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
