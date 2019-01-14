// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: response_error.proto

#include "response_error.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace happy {
namespace utils {
namespace network {
class ResponseErrorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ResponseError> _instance;
} _ResponseError_default_instance_;
}  // namespace network
}  // namespace utils
}  // namespace happy
static void InitDefaultsResponseError_response_5ferror_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::happy::utils::network::_ResponseError_default_instance_;
    new (ptr) ::happy::utils::network::ResponseError();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::happy::utils::network::ResponseError::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ResponseError_response_5ferror_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsResponseError_response_5ferror_2eproto}, {}};

void InitDefaults_response_5ferror_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_ResponseError_response_5ferror_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_response_5ferror_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_response_5ferror_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_response_5ferror_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_response_5ferror_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::ResponseError, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::ResponseError, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::ResponseError, error_code_),
  PROTOBUF_FIELD_OFFSET(::happy::utils::network::ResponseError, error_string_),
  1,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::happy::utils::network::ResponseError)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::happy::utils::network::_ResponseError_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_response_5ferror_2eproto = {
  {}, AddDescriptors_response_5ferror_2eproto, "response_error.proto", schemas,
  file_default_instances, TableStruct_response_5ferror_2eproto::offsets,
  file_level_metadata_response_5ferror_2eproto, 1, file_level_enum_descriptors_response_5ferror_2eproto, file_level_service_descriptors_response_5ferror_2eproto,
};

const char descriptor_table_protodef_response_5ferror_2eproto[] =
  "\n\024response_error.proto\022\023happy.utils.netw"
  "ork\"9\n\rResponseError\022\022\n\nerror_code\030\001 \002(\005"
  "\022\024\n\014error_string\030\002 \002(\t"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_response_5ferror_2eproto = {
  false, InitDefaults_response_5ferror_2eproto, 
  descriptor_table_protodef_response_5ferror_2eproto,
  "response_error.proto", &assign_descriptors_table_response_5ferror_2eproto, 102,
};

void AddDescriptors_response_5ferror_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_response_5ferror_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_response_5ferror_2eproto = []() { AddDescriptors_response_5ferror_2eproto(); return true; }();
namespace happy {
namespace utils {
namespace network {

// ===================================================================

void ResponseError::InitAsDefaultInstance() {
}
class ResponseError::HasBitSetters {
 public:
  static void set_has_error_code(ResponseError* msg) {
    msg->_has_bits_[0] |= 0x00000002u;
  }
  static void set_has_error_string(ResponseError* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResponseError::kErrorCodeFieldNumber;
const int ResponseError::kErrorStringFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResponseError::ResponseError()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:happy.utils.network.ResponseError)
}
ResponseError::ResponseError(const ResponseError& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  error_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_error_string()) {
    error_string_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_string_);
  }
  error_code_ = from.error_code_;
  // @@protoc_insertion_point(copy_constructor:happy.utils.network.ResponseError)
}

void ResponseError::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ResponseError_response_5ferror_2eproto.base);
  error_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_code_ = 0;
}

ResponseError::~ResponseError() {
  // @@protoc_insertion_point(destructor:happy.utils.network.ResponseError)
  SharedDtor();
}

void ResponseError::SharedDtor() {
  error_string_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ResponseError::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResponseError& ResponseError::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ResponseError_response_5ferror_2eproto.base);
  return *internal_default_instance();
}


void ResponseError::Clear() {
// @@protoc_insertion_point(message_clear_start:happy.utils.network.ResponseError)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    error_string_.ClearNonDefaultToEmptyNoArena();
  }
  error_code_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ResponseError::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ResponseError*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // required int32 error_code = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val;
        ptr = ::google::protobuf::io::Parse64(ptr, &val);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ::google::protobuf::int32 value = val;
        msg->set_error_code(value);
        break;
      }
      // required string error_string = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("happy.utils.network.ResponseError.error_string");
        auto str = msg->mutable_error_string();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          object = str;
          str->clear();
          str->reserve(size);
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8Verify;
          goto len_delim_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8Verify(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(str, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ResponseError::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:happy.utils.network.ResponseError)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 error_code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          HasBitSetters::set_has_error_code(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string error_string = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error_string()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->error_string().data(), static_cast<int>(this->error_string().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "happy.utils.network.ResponseError.error_string");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:happy.utils.network.ResponseError)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:happy.utils.network.ResponseError)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ResponseError::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:happy.utils.network.ResponseError)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 error_code = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->error_code(), output);
  }

  // required string error_string = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error_string().data(), static_cast<int>(this->error_string().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "happy.utils.network.ResponseError.error_string");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->error_string(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:happy.utils.network.ResponseError)
}

::google::protobuf::uint8* ResponseError::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:happy.utils.network.ResponseError)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 error_code = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->error_code(), target);
  }

  // required string error_string = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error_string().data(), static_cast<int>(this->error_string().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "happy.utils.network.ResponseError.error_string");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->error_string(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:happy.utils.network.ResponseError)
  return target;
}

size_t ResponseError::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:happy.utils.network.ResponseError)
  size_t total_size = 0;

  if (has_error_string()) {
    // required string error_string = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error_string());
  }

  if (has_error_code()) {
    // required int32 error_code = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->error_code());
  }

  return total_size;
}
size_t ResponseError::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:happy.utils.network.ResponseError)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string error_string = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error_string());

    // required int32 error_code = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->error_code());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResponseError::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:happy.utils.network.ResponseError)
  GOOGLE_DCHECK_NE(&from, this);
  const ResponseError* source =
      ::google::protobuf::DynamicCastToGenerated<ResponseError>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:happy.utils.network.ResponseError)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:happy.utils.network.ResponseError)
    MergeFrom(*source);
  }
}

void ResponseError::MergeFrom(const ResponseError& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:happy.utils.network.ResponseError)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      error_string_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_string_);
    }
    if (cached_has_bits & 0x00000002u) {
      error_code_ = from.error_code_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ResponseError::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:happy.utils.network.ResponseError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResponseError::CopyFrom(const ResponseError& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:happy.utils.network.ResponseError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseError::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void ResponseError::Swap(ResponseError* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ResponseError::InternalSwap(ResponseError* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  error_string_.Swap(&other->error_string_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(error_code_, other->error_code_);
}

::google::protobuf::Metadata ResponseError::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_response_5ferror_2eproto);
  return ::file_level_metadata_response_5ferror_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace network
}  // namespace utils
}  // namespace happy
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::happy::utils::network::ResponseError* Arena::CreateMaybeMessage< ::happy::utils::network::ResponseError >(Arena* arena) {
  return Arena::CreateInternal< ::happy::utils::network::ResponseError >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
