// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#include "Message.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr RequestMessage::RequestMessage(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : clientid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , serverid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , sign_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , cmdtype_(0){}
struct RequestMessageDefaultTypeInternal {
  constexpr RequestMessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RequestMessageDefaultTypeInternal() {}
  union {
    RequestMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RequestMessageDefaultTypeInternal _RequestMessage_default_instance_;
constexpr ResponseMessage::ResponseMessage(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : clientid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , serverid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , status_(false)
  , seckeyid_(0){}
struct ResponseMessageDefaultTypeInternal {
  constexpr ResponseMessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ResponseMessageDefaultTypeInternal() {}
  union {
    ResponseMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ResponseMessageDefaultTypeInternal _ResponseMessage_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Message_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Message_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Message_2eproto = nullptr;

const uint32_t TableStruct_Message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::RequestMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::RequestMessage, cmdtype_),
  PROTOBUF_FIELD_OFFSET(::RequestMessage, clientid_),
  PROTOBUF_FIELD_OFFSET(::RequestMessage, serverid_),
  PROTOBUF_FIELD_OFFSET(::RequestMessage, sign_),
  PROTOBUF_FIELD_OFFSET(::RequestMessage, data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ResponseMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ResponseMessage, status_),
  PROTOBUF_FIELD_OFFSET(::ResponseMessage, seckeyid_),
  PROTOBUF_FIELD_OFFSET(::ResponseMessage, clientid_),
  PROTOBUF_FIELD_OFFSET(::ResponseMessage, serverid_),
  PROTOBUF_FIELD_OFFSET(::ResponseMessage, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::RequestMessage)},
  { 11, -1, -1, sizeof(::ResponseMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_RequestMessage_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ResponseMessage_default_instance_),
};

const char descriptor_table_protodef_Message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rMessage.proto\"a\n\016RequestMessage\022\017\n\007cmd"
  "Type\030\001 \001(\005\022\020\n\010clientId\030\002 \001(\014\022\020\n\010serverId"
  "\030\003 \001(\014\022\014\n\004sign\030\004 \001(\014\022\014\n\004data\030\005 \001(\014\"e\n\017Re"
  "sponseMessage\022\016\n\006status\030\001 \001(\010\022\020\n\010seckeyI"
  "d\030\002 \001(\005\022\020\n\010clientId\030\003 \001(\014\022\020\n\010serverId\030\004 "
  "\001(\014\022\014\n\004data\030\005 \001(\014b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Message_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Message_2eproto = {
  false, false, 225, descriptor_table_protodef_Message_2eproto, "Message.proto", 
  &descriptor_table_Message_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_Message_2eproto::offsets,
  file_level_metadata_Message_2eproto, file_level_enum_descriptors_Message_2eproto, file_level_service_descriptors_Message_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_Message_2eproto_getter() {
  return &descriptor_table_Message_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_Message_2eproto(&descriptor_table_Message_2eproto);

// ===================================================================

class RequestMessage::_Internal {
 public:
};

RequestMessage::RequestMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:RequestMessage)
}
RequestMessage::RequestMessage(const RequestMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  clientid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    clientid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_clientid().empty()) {
    clientid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_clientid(), 
      GetArenaForAllocation());
  }
  serverid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    serverid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_serverid().empty()) {
    serverid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_serverid(), 
      GetArenaForAllocation());
  }
  sign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    sign_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_sign().empty()) {
    sign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sign(), 
      GetArenaForAllocation());
  }
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_data().empty()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArenaForAllocation());
  }
  cmdtype_ = from.cmdtype_;
  // @@protoc_insertion_point(copy_constructor:RequestMessage)
}

inline void RequestMessage::SharedCtor() {
clientid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  clientid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
serverid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  serverid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
sign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  sign_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
cmdtype_ = 0;
}

RequestMessage::~RequestMessage() {
  // @@protoc_insertion_point(destructor:RequestMessage)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void RequestMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  clientid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  serverid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sign_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void RequestMessage::ArenaDtor(void* object) {
  RequestMessage* _this = reinterpret_cast< RequestMessage* >(object);
  (void)_this;
}
void RequestMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RequestMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RequestMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:RequestMessage)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clientid_.ClearToEmpty();
  serverid_.ClearToEmpty();
  sign_.ClearToEmpty();
  data_.ClearToEmpty();
  cmdtype_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RequestMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 cmdType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          cmdtype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes clientId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_clientid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes serverId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_serverid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes sign = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_sign();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes data = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* RequestMessage::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RequestMessage)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 cmdType = 1;
  if (this->_internal_cmdtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_cmdtype(), target);
  }

  // bytes clientId = 2;
  if (!this->_internal_clientid().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_clientid(), target);
  }

  // bytes serverId = 3;
  if (!this->_internal_serverid().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_serverid(), target);
  }

  // bytes sign = 4;
  if (!this->_internal_sign().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_sign(), target);
  }

  // bytes data = 5;
  if (!this->_internal_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RequestMessage)
  return target;
}

size_t RequestMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RequestMessage)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes clientId = 2;
  if (!this->_internal_clientid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_clientid());
  }

  // bytes serverId = 3;
  if (!this->_internal_serverid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_serverid());
  }

  // bytes sign = 4;
  if (!this->_internal_sign().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sign());
  }

  // bytes data = 5;
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // int32 cmdType = 1;
  if (this->_internal_cmdtype() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_cmdtype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RequestMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    RequestMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RequestMessage::GetClassData() const { return &_class_data_; }

void RequestMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<RequestMessage *>(to)->MergeFrom(
      static_cast<const RequestMessage &>(from));
}


void RequestMessage::MergeFrom(const RequestMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RequestMessage)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_clientid().empty()) {
    _internal_set_clientid(from._internal_clientid());
  }
  if (!from._internal_serverid().empty()) {
    _internal_set_serverid(from._internal_serverid());
  }
  if (!from._internal_sign().empty()) {
    _internal_set_sign(from._internal_sign());
  }
  if (!from._internal_data().empty()) {
    _internal_set_data(from._internal_data());
  }
  if (from._internal_cmdtype() != 0) {
    _internal_set_cmdtype(from._internal_cmdtype());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RequestMessage::CopyFrom(const RequestMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RequestMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestMessage::IsInitialized() const {
  return true;
}

void RequestMessage::InternalSwap(RequestMessage* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &clientid_, lhs_arena,
      &other->clientid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &serverid_, lhs_arena,
      &other->serverid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &sign_, lhs_arena,
      &other->sign_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &data_, lhs_arena,
      &other->data_, rhs_arena
  );
  swap(cmdtype_, other->cmdtype_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RequestMessage::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_Message_2eproto_getter, &descriptor_table_Message_2eproto_once,
      file_level_metadata_Message_2eproto[0]);
}

// ===================================================================

class ResponseMessage::_Internal {
 public:
};

ResponseMessage::ResponseMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:ResponseMessage)
}
ResponseMessage::ResponseMessage(const ResponseMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  clientid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    clientid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_clientid().empty()) {
    clientid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_clientid(), 
      GetArenaForAllocation());
  }
  serverid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    serverid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_serverid().empty()) {
    serverid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_serverid(), 
      GetArenaForAllocation());
  }
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_data().empty()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArenaForAllocation());
  }
  ::memcpy(&status_, &from.status_,
    static_cast<size_t>(reinterpret_cast<char*>(&seckeyid_) -
    reinterpret_cast<char*>(&status_)) + sizeof(seckeyid_));
  // @@protoc_insertion_point(copy_constructor:ResponseMessage)
}

inline void ResponseMessage::SharedCtor() {
clientid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  clientid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
serverid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  serverid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&status_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&seckeyid_) -
    reinterpret_cast<char*>(&status_)) + sizeof(seckeyid_));
}

ResponseMessage::~ResponseMessage() {
  // @@protoc_insertion_point(destructor:ResponseMessage)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ResponseMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  clientid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  serverid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ResponseMessage::ArenaDtor(void* object) {
  ResponseMessage* _this = reinterpret_cast< ResponseMessage* >(object);
  (void)_this;
}
void ResponseMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ResponseMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ResponseMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:ResponseMessage)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clientid_.ClearToEmpty();
  serverid_.ClearToEmpty();
  data_.ClearToEmpty();
  ::memset(&status_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&seckeyid_) -
      reinterpret_cast<char*>(&status_)) + sizeof(seckeyid_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResponseMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 seckeyId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          seckeyid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes clientId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_clientid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes serverId = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_serverid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes data = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ResponseMessage::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ResponseMessage)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool status = 1;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_status(), target);
  }

  // int32 seckeyId = 2;
  if (this->_internal_seckeyid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_seckeyid(), target);
  }

  // bytes clientId = 3;
  if (!this->_internal_clientid().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_clientid(), target);
  }

  // bytes serverId = 4;
  if (!this->_internal_serverid().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_serverid(), target);
  }

  // bytes data = 5;
  if (!this->_internal_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ResponseMessage)
  return target;
}

size_t ResponseMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ResponseMessage)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes clientId = 3;
  if (!this->_internal_clientid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_clientid());
  }

  // bytes serverId = 4;
  if (!this->_internal_serverid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_serverid());
  }

  // bytes data = 5;
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // bool status = 1;
  if (this->_internal_status() != 0) {
    total_size += 1 + 1;
  }

  // int32 seckeyId = 2;
  if (this->_internal_seckeyid() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_seckeyid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ResponseMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ResponseMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ResponseMessage::GetClassData() const { return &_class_data_; }

void ResponseMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ResponseMessage *>(to)->MergeFrom(
      static_cast<const ResponseMessage &>(from));
}


void ResponseMessage::MergeFrom(const ResponseMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ResponseMessage)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_clientid().empty()) {
    _internal_set_clientid(from._internal_clientid());
  }
  if (!from._internal_serverid().empty()) {
    _internal_set_serverid(from._internal_serverid());
  }
  if (!from._internal_data().empty()) {
    _internal_set_data(from._internal_data());
  }
  if (from._internal_status() != 0) {
    _internal_set_status(from._internal_status());
  }
  if (from._internal_seckeyid() != 0) {
    _internal_set_seckeyid(from._internal_seckeyid());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ResponseMessage::CopyFrom(const ResponseMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ResponseMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseMessage::IsInitialized() const {
  return true;
}

void ResponseMessage::InternalSwap(ResponseMessage* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &clientid_, lhs_arena,
      &other->clientid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &serverid_, lhs_arena,
      &other->serverid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &data_, lhs_arena,
      &other->data_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ResponseMessage, seckeyid_)
      + sizeof(ResponseMessage::seckeyid_)
      - PROTOBUF_FIELD_OFFSET(ResponseMessage, status_)>(
          reinterpret_cast<char*>(&status_),
          reinterpret_cast<char*>(&other->status_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ResponseMessage::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_Message_2eproto_getter, &descriptor_table_Message_2eproto_once,
      file_level_metadata_Message_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::RequestMessage* Arena::CreateMaybeMessage< ::RequestMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RequestMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::ResponseMessage* Arena::CreateMaybeMessage< ::ResponseMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ResponseMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>