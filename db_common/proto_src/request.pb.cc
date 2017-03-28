// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "request.pb.h"

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

namespace proto {
namespace db {

namespace {

const ::google::protobuf::Descriptor* request_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  request_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_request_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_request_2eproto() {
  protobuf_AddDesc_request_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "request.proto");
  GOOGLE_CHECK(file != NULL);
  request_descriptor_ = file->message_type(0);
  static const int request_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, session_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, associate_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, timeout_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, content_),
  };
  request_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      request_descriptor_,
      request::default_instance_,
      request_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, _has_bits_[0]),
      -1,
      -1,
      sizeof(request),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_request_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      request_descriptor_, &request::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_request_2eproto() {
  delete request::default_instance_;
  delete request_reflection_;
}

void protobuf_AddDesc_request_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_request_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rrequest.proto\022\010proto.db\032\031google/protob"
    "uf/any.proto\"y\n\007request\022\022\n\nsession_id\030\001 "
    "\002(\004\022\024\n\014associate_id\030\002 \002(\r\022\014\n\004type\030\003 \002(\r\022"
    "\017\n\007timeout\030\004 \002(\r\022%\n\007content\030\005 \002(\0132\024.goog"
    "le.protobuf.Any", 175);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "request.proto", &protobuf_RegisterTypes);
  request::default_instance_ = new request();
  request::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_request_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_request_2eproto {
  StaticDescriptorInitializer_request_2eproto() {
    protobuf_AddDesc_request_2eproto();
  }
} static_descriptor_initializer_request_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int request::kSessionIdFieldNumber;
const int request::kAssociateIdFieldNumber;
const int request::kTypeFieldNumber;
const int request::kTimeoutFieldNumber;
const int request::kContentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

request::request()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.db.request)
}

void request::InitAsDefaultInstance() {
  content_ = const_cast< ::google::protobuf::Any*>(&::google::protobuf::Any::default_instance());
}

request::request(const request& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto.db.request)
}

void request::SharedCtor() {
  _cached_size_ = 0;
  session_id_ = GOOGLE_ULONGLONG(0);
  associate_id_ = 0u;
  type_ = 0u;
  timeout_ = 0u;
  content_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

request::~request() {
  // @@protoc_insertion_point(destructor:proto.db.request)
  SharedDtor();
}

void request::SharedDtor() {
  if (this != default_instance_) {
    delete content_;
  }
}

void request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* request::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return request_descriptor_;
}

const request& request::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_request_2eproto();
  return *default_instance_;
}

request* request::default_instance_ = NULL;

request* request::New(::google::protobuf::Arena* arena) const {
  request* n = new request;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void request::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.db.request)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(request, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<request*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(session_id_, type_);
    timeout_ = 0u;
    if (has_content()) {
      if (content_ != NULL) content_->::google::protobuf::Any::Clear();
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.db.request)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 session_id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &session_id_)));
          set_has_session_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_associate_id;
        break;
      }

      // required uint32 associate_id = 2;
      case 2: {
        if (tag == 16) {
         parse_associate_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &associate_id_)));
          set_has_associate_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // required uint32 type = 3;
      case 3: {
        if (tag == 24) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_timeout;
        break;
      }

      // required uint32 timeout = 4;
      case 4: {
        if (tag == 32) {
         parse_timeout:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &timeout_)));
          set_has_timeout();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_content;
        break;
      }

      // required .google.protobuf.Any content = 5;
      case 5: {
        if (tag == 42) {
         parse_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_content()));
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
  // @@protoc_insertion_point(parse_success:proto.db.request)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.db.request)
  return false;
#undef DO_
}

void request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.db.request)
  // required uint64 session_id = 1;
  if (has_session_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->session_id(), output);
  }

  // required uint32 associate_id = 2;
  if (has_associate_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->associate_id(), output);
  }

  // required uint32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->type(), output);
  }

  // required uint32 timeout = 4;
  if (has_timeout()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->timeout(), output);
  }

  // required .google.protobuf.Any content = 5;
  if (has_content()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->content_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.db.request)
}

::google::protobuf::uint8* request::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.db.request)
  // required uint64 session_id = 1;
  if (has_session_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->session_id(), target);
  }

  // required uint32 associate_id = 2;
  if (has_associate_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->associate_id(), target);
  }

  // required uint32 type = 3;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->type(), target);
  }

  // required uint32 timeout = 4;
  if (has_timeout()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->timeout(), target);
  }

  // required .google.protobuf.Any content = 5;
  if (has_content()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->content_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.db.request)
  return target;
}

int request::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:proto.db.request)
  int total_size = 0;

  if (has_session_id()) {
    // required uint64 session_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->session_id());
  }

  if (has_associate_id()) {
    // required uint32 associate_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->associate_id());
  }

  if (has_type()) {
    // required uint32 type = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->type());
  }

  if (has_timeout()) {
    // required uint32 timeout = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->timeout());
  }

  if (has_content()) {
    // required .google.protobuf.Any content = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->content_);
  }

  return total_size;
}
int request::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:proto.db.request)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required uint64 session_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->session_id());

    // required uint32 associate_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->associate_id());

    // required uint32 type = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->type());

    // required uint32 timeout = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->timeout());

    // required .google.protobuf.Any content = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->content_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void request::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.db.request)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const request* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const request>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.db.request)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.db.request)
    MergeFrom(*source);
  }
}

void request::MergeFrom(const request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.db.request)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_session_id()) {
      set_session_id(from.session_id());
    }
    if (from.has_associate_id()) {
      set_associate_id(from.associate_id());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_timeout()) {
      set_timeout(from.timeout());
    }
    if (from.has_content()) {
      mutable_content()->::google::protobuf::Any::MergeFrom(from.content());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void request::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.db.request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void request::CopyFrom(const request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.db.request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool request::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void request::Swap(request* other) {
  if (other == this) return;
  InternalSwap(other);
}
void request::InternalSwap(request* other) {
  std::swap(session_id_, other->session_id_);
  std::swap(associate_id_, other->associate_id_);
  std::swap(type_, other->type_);
  std::swap(timeout_, other->timeout_);
  std::swap(content_, other->content_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata request::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = request_descriptor_;
  metadata.reflection = request_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// request

// required uint64 session_id = 1;
bool request::has_session_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void request::set_has_session_id() {
  _has_bits_[0] |= 0x00000001u;
}
void request::clear_has_session_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void request::clear_session_id() {
  session_id_ = GOOGLE_ULONGLONG(0);
  clear_has_session_id();
}
 ::google::protobuf::uint64 request::session_id() const {
  // @@protoc_insertion_point(field_get:proto.db.request.session_id)
  return session_id_;
}
 void request::set_session_id(::google::protobuf::uint64 value) {
  set_has_session_id();
  session_id_ = value;
  // @@protoc_insertion_point(field_set:proto.db.request.session_id)
}

// required uint32 associate_id = 2;
bool request::has_associate_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void request::set_has_associate_id() {
  _has_bits_[0] |= 0x00000002u;
}
void request::clear_has_associate_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void request::clear_associate_id() {
  associate_id_ = 0u;
  clear_has_associate_id();
}
 ::google::protobuf::uint32 request::associate_id() const {
  // @@protoc_insertion_point(field_get:proto.db.request.associate_id)
  return associate_id_;
}
 void request::set_associate_id(::google::protobuf::uint32 value) {
  set_has_associate_id();
  associate_id_ = value;
  // @@protoc_insertion_point(field_set:proto.db.request.associate_id)
}

// required uint32 type = 3;
bool request::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void request::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
void request::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
void request::clear_type() {
  type_ = 0u;
  clear_has_type();
}
 ::google::protobuf::uint32 request::type() const {
  // @@protoc_insertion_point(field_get:proto.db.request.type)
  return type_;
}
 void request::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:proto.db.request.type)
}

// required uint32 timeout = 4;
bool request::has_timeout() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void request::set_has_timeout() {
  _has_bits_[0] |= 0x00000008u;
}
void request::clear_has_timeout() {
  _has_bits_[0] &= ~0x00000008u;
}
void request::clear_timeout() {
  timeout_ = 0u;
  clear_has_timeout();
}
 ::google::protobuf::uint32 request::timeout() const {
  // @@protoc_insertion_point(field_get:proto.db.request.timeout)
  return timeout_;
}
 void request::set_timeout(::google::protobuf::uint32 value) {
  set_has_timeout();
  timeout_ = value;
  // @@protoc_insertion_point(field_set:proto.db.request.timeout)
}

// required .google.protobuf.Any content = 5;
bool request::has_content() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void request::set_has_content() {
  _has_bits_[0] |= 0x00000010u;
}
void request::clear_has_content() {
  _has_bits_[0] &= ~0x00000010u;
}
void request::clear_content() {
  if (content_ != NULL) content_->::google::protobuf::Any::Clear();
  clear_has_content();
}
const ::google::protobuf::Any& request::content() const {
  // @@protoc_insertion_point(field_get:proto.db.request.content)
  return content_ != NULL ? *content_ : *default_instance_->content_;
}
::google::protobuf::Any* request::mutable_content() {
  set_has_content();
  if (content_ == NULL) {
    content_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:proto.db.request.content)
  return content_;
}
::google::protobuf::Any* request::release_content() {
  // @@protoc_insertion_point(field_release:proto.db.request.content)
  clear_has_content();
  ::google::protobuf::Any* temp = content_;
  content_ = NULL;
  return temp;
}
void request::set_allocated_content(::google::protobuf::Any* content) {
  delete content_;
  content_ = content;
  if (content) {
    set_has_content();
  } else {
    clear_has_content();
  }
  // @@protoc_insertion_point(field_set_allocated:proto.db.request.content)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace db
}  // namespace proto

// @@protoc_insertion_point(global_scope)
