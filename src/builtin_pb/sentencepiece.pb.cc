// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sentencepiece.proto

#include "sentencepiece.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_sentencepiece_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_sentencepiece_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_SentencePieceText_SentencePiece;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_sentencepiece_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_SentencePieceText;
}  // namespace protobuf_sentencepiece_2eproto
namespace sentencepiece {
class SentencePieceText_SentencePieceDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SentencePieceText_SentencePiece>
      _instance;
} _SentencePieceText_SentencePiece_default_instance_;
class SentencePieceTextDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SentencePieceText>
      _instance;
} _SentencePieceText_default_instance_;
class NBestSentencePieceTextDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<NBestSentencePieceText>
      _instance;
} _NBestSentencePieceText_default_instance_;
}  // namespace sentencepiece
namespace protobuf_sentencepiece_2eproto {
static void InitDefaultsSentencePieceText_SentencePiece() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sentencepiece::_SentencePieceText_SentencePiece_default_instance_;
    new (ptr) ::sentencepiece::SentencePieceText_SentencePiece();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sentencepiece::SentencePieceText_SentencePiece::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SentencePieceText_SentencePiece =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSentencePieceText_SentencePiece}, {}};

static void InitDefaultsSentencePieceText() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sentencepiece::_SentencePieceText_default_instance_;
    new (ptr) ::sentencepiece::SentencePieceText();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sentencepiece::SentencePieceText::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_SentencePieceText =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsSentencePieceText}, {
      &protobuf_sentencepiece_2eproto::scc_info_SentencePieceText_SentencePiece.base,}};

static void InitDefaultsNBestSentencePieceText() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sentencepiece::_NBestSentencePieceText_default_instance_;
    new (ptr) ::sentencepiece::NBestSentencePieceText();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sentencepiece::NBestSentencePieceText::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_NBestSentencePieceText =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsNBestSentencePieceText}, {
      &protobuf_sentencepiece_2eproto::scc_info_SentencePieceText.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SentencePieceText_SentencePiece.base);
  ::google::protobuf::internal::InitSCC(&scc_info_SentencePieceText.base);
  ::google::protobuf::internal::InitSCC(&scc_info_NBestSentencePieceText.base);
}

}  // namespace protobuf_sentencepiece_2eproto
namespace sentencepiece {

// ===================================================================

void SentencePieceText_SentencePiece::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SentencePieceText_SentencePiece::kPieceFieldNumber;
const int SentencePieceText_SentencePiece::kIdFieldNumber;
const int SentencePieceText_SentencePiece::kSurfaceFieldNumber;
const int SentencePieceText_SentencePiece::kBeginFieldNumber;
const int SentencePieceText_SentencePiece::kEndFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SentencePieceText_SentencePiece::SentencePieceText_SentencePiece()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_sentencepiece_2eproto::scc_info_SentencePieceText_SentencePiece.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:sentencepiece.SentencePieceText.SentencePiece)
}
SentencePieceText_SentencePiece::SentencePieceText_SentencePiece(const SentencePieceText_SentencePiece& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  piece_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_piece()) {
    piece_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.piece_);
  }
  surface_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_surface()) {
    surface_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.surface_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&end_) -
    reinterpret_cast<char*>(&id_)) + sizeof(end_));
  // @@protoc_insertion_point(copy_constructor:sentencepiece.SentencePieceText.SentencePiece)
}

void SentencePieceText_SentencePiece::SharedCtor() {
  piece_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  surface_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_) -
      reinterpret_cast<char*>(&id_)) + sizeof(end_));
}

SentencePieceText_SentencePiece::~SentencePieceText_SentencePiece() {
  // @@protoc_insertion_point(destructor:sentencepiece.SentencePieceText.SentencePiece)
  SharedDtor();
}

void SentencePieceText_SentencePiece::SharedDtor() {
  piece_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  surface_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SentencePieceText_SentencePiece::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SentencePieceText_SentencePiece& SentencePieceText_SentencePiece::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_sentencepiece_2eproto::scc_info_SentencePieceText_SentencePiece.base);
  return *internal_default_instance();
}


void SentencePieceText_SentencePiece::Clear() {
// @@protoc_insertion_point(message_clear_start:sentencepiece.SentencePieceText.SentencePiece)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      piece_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      surface_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 28u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&end_) -
        reinterpret_cast<char*>(&id_)) + sizeof(end_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SentencePieceText_SentencePiece::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:sentencepiece.SentencePieceText.SentencePiece)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string piece = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_piece()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string surface = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_surface()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 begin = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_begin();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &begin_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 end = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_end();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &end_)));
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
        if ((1600u <= tag)) {
          DO_(_extensions_.ParseField(tag, input,
              internal_default_instance(),
              &unknown_fields_stream));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sentencepiece.SentencePieceText.SentencePiece)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sentencepiece.SentencePieceText.SentencePiece)
  return false;
#undef DO_
}

void SentencePieceText_SentencePiece::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sentencepiece.SentencePieceText.SentencePiece)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string piece = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->piece(), output);
  }

  // optional uint32 id = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->id(), output);
  }

  // optional string surface = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->surface(), output);
  }

  // optional uint32 begin = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->begin(), output);
  }

  // optional uint32 end = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->end(), output);
  }

  // Extension range [200, 536870912)
  _extensions_.SerializeWithCachedSizes(
      200, 536870912, output);

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sentencepiece.SentencePieceText.SentencePiece)
}

size_t SentencePieceText_SentencePiece::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sentencepiece.SentencePieceText.SentencePiece)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 31u) {
    // optional string piece = 1;
    if (has_piece()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->piece());
    }

    // optional string surface = 3;
    if (has_surface()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->surface());
    }

    // optional uint32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // optional uint32 begin = 4;
    if (has_begin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->begin());
    }

    // optional uint32 end = 5;
    if (has_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->end());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SentencePieceText_SentencePiece::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SentencePieceText_SentencePiece*>(&from));
}

void SentencePieceText_SentencePiece::MergeFrom(const SentencePieceText_SentencePiece& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sentencepiece.SentencePieceText.SentencePiece)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_piece();
      piece_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.piece_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_surface();
      surface_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.surface_);
    }
    if (cached_has_bits & 0x00000004u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000008u) {
      begin_ = from.begin_;
    }
    if (cached_has_bits & 0x00000010u) {
      end_ = from.end_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SentencePieceText_SentencePiece::CopyFrom(const SentencePieceText_SentencePiece& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sentencepiece.SentencePieceText.SentencePiece)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SentencePieceText_SentencePiece::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void SentencePieceText_SentencePiece::Swap(SentencePieceText_SentencePiece* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SentencePieceText_SentencePiece::InternalSwap(SentencePieceText_SentencePiece* other) {
  using std::swap;
  piece_.Swap(&other->piece_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  surface_.Swap(&other->surface_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(begin_, other->begin_);
  swap(end_, other->end_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  _extensions_.Swap(&other->_extensions_);
}

::std::string SentencePieceText_SentencePiece::GetTypeName() const {
  return "sentencepiece.SentencePieceText.SentencePiece";
}


// ===================================================================

void SentencePieceText::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SentencePieceText::kTextFieldNumber;
const int SentencePieceText::kPiecesFieldNumber;
const int SentencePieceText::kScoreFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SentencePieceText::SentencePieceText()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_sentencepiece_2eproto::scc_info_SentencePieceText.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:sentencepiece.SentencePieceText)
}
SentencePieceText::SentencePieceText(const SentencePieceText& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      pieces_(from.pieces_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_text()) {
    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  score_ = from.score_;
  // @@protoc_insertion_point(copy_constructor:sentencepiece.SentencePieceText)
}

void SentencePieceText::SharedCtor() {
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  score_ = 0;
}

SentencePieceText::~SentencePieceText() {
  // @@protoc_insertion_point(destructor:sentencepiece.SentencePieceText)
  SharedDtor();
}

void SentencePieceText::SharedDtor() {
  text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SentencePieceText::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SentencePieceText& SentencePieceText::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_sentencepiece_2eproto::scc_info_SentencePieceText.base);
  return *internal_default_instance();
}


void SentencePieceText::Clear() {
// @@protoc_insertion_point(message_clear_start:sentencepiece.SentencePieceText)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  pieces_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    text_.ClearNonDefaultToEmptyNoArena();
  }
  score_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SentencePieceText::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:sentencepiece.SentencePieceText)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string text = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .sentencepiece.SentencePieceText.SentencePiece pieces = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_pieces()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional float score = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {
          set_has_score();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &score_)));
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
        if ((1600u <= tag)) {
          DO_(_extensions_.ParseField(tag, input,
              internal_default_instance(),
              &unknown_fields_stream));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sentencepiece.SentencePieceText)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sentencepiece.SentencePieceText)
  return false;
#undef DO_
}

void SentencePieceText::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sentencepiece.SentencePieceText)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->text(), output);
  }

  // repeated .sentencepiece.SentencePieceText.SentencePiece pieces = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->pieces_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2,
      this->pieces(static_cast<int>(i)),
      output);
  }

  // optional float score = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->score(), output);
  }

  // Extension range [200, 536870912)
  _extensions_.SerializeWithCachedSizes(
      200, 536870912, output);

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sentencepiece.SentencePieceText)
}

size_t SentencePieceText::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sentencepiece.SentencePieceText)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .sentencepiece.SentencePieceText.SentencePiece pieces = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->pieces_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->pieces(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional string text = 1;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->text());
    }

    // optional float score = 3;
    if (has_score()) {
      total_size += 1 + 4;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SentencePieceText::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SentencePieceText*>(&from));
}

void SentencePieceText::MergeFrom(const SentencePieceText& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sentencepiece.SentencePieceText)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  pieces_.MergeFrom(from.pieces_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_text();
      text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
    }
    if (cached_has_bits & 0x00000002u) {
      score_ = from.score_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SentencePieceText::CopyFrom(const SentencePieceText& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sentencepiece.SentencePieceText)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SentencePieceText::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  if (!::google::protobuf::internal::AllAreInitialized(this->pieces())) return false;
  return true;
}

void SentencePieceText::Swap(SentencePieceText* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SentencePieceText::InternalSwap(SentencePieceText* other) {
  using std::swap;
  CastToBase(&pieces_)->InternalSwap(CastToBase(&other->pieces_));
  text_.Swap(&other->text_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(score_, other->score_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  _extensions_.Swap(&other->_extensions_);
}

::std::string SentencePieceText::GetTypeName() const {
  return "sentencepiece.SentencePieceText";
}


// ===================================================================

void NBestSentencePieceText::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NBestSentencePieceText::kNbestsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NBestSentencePieceText::NBestSentencePieceText()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_sentencepiece_2eproto::scc_info_NBestSentencePieceText.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:sentencepiece.NBestSentencePieceText)
}
NBestSentencePieceText::NBestSentencePieceText(const NBestSentencePieceText& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      nbests_(from.nbests_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:sentencepiece.NBestSentencePieceText)
}

void NBestSentencePieceText::SharedCtor() {
}

NBestSentencePieceText::~NBestSentencePieceText() {
  // @@protoc_insertion_point(destructor:sentencepiece.NBestSentencePieceText)
  SharedDtor();
}

void NBestSentencePieceText::SharedDtor() {
}

void NBestSentencePieceText::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const NBestSentencePieceText& NBestSentencePieceText::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_sentencepiece_2eproto::scc_info_NBestSentencePieceText.base);
  return *internal_default_instance();
}


void NBestSentencePieceText::Clear() {
// @@protoc_insertion_point(message_clear_start:sentencepiece.NBestSentencePieceText)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  nbests_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool NBestSentencePieceText::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:sentencepiece.NBestSentencePieceText)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .sentencepiece.SentencePieceText nbests = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_nbests()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sentencepiece.NBestSentencePieceText)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sentencepiece.NBestSentencePieceText)
  return false;
#undef DO_
}

void NBestSentencePieceText::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sentencepiece.NBestSentencePieceText)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .sentencepiece.SentencePieceText nbests = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->nbests_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1,
      this->nbests(static_cast<int>(i)),
      output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sentencepiece.NBestSentencePieceText)
}

size_t NBestSentencePieceText::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sentencepiece.NBestSentencePieceText)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .sentencepiece.SentencePieceText nbests = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->nbests_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->nbests(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NBestSentencePieceText::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NBestSentencePieceText*>(&from));
}

void NBestSentencePieceText::MergeFrom(const NBestSentencePieceText& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sentencepiece.NBestSentencePieceText)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  nbests_.MergeFrom(from.nbests_);
}

void NBestSentencePieceText::CopyFrom(const NBestSentencePieceText& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sentencepiece.NBestSentencePieceText)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NBestSentencePieceText::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->nbests())) return false;
  return true;
}

void NBestSentencePieceText::Swap(NBestSentencePieceText* other) {
  if (other == this) return;
  InternalSwap(other);
}
void NBestSentencePieceText::InternalSwap(NBestSentencePieceText* other) {
  using std::swap;
  CastToBase(&nbests_)->InternalSwap(CastToBase(&other->nbests_));
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string NBestSentencePieceText::GetTypeName() const {
  return "sentencepiece.NBestSentencePieceText";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sentencepiece
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::sentencepiece::SentencePieceText_SentencePiece* Arena::CreateMaybeMessage< ::sentencepiece::SentencePieceText_SentencePiece >(Arena* arena) {
  return Arena::CreateInternal< ::sentencepiece::SentencePieceText_SentencePiece >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::sentencepiece::SentencePieceText* Arena::CreateMaybeMessage< ::sentencepiece::SentencePieceText >(Arena* arena) {
  return Arena::CreateInternal< ::sentencepiece::SentencePieceText >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::sentencepiece::NBestSentencePieceText* Arena::CreateMaybeMessage< ::sentencepiece::NBestSentencePieceText >(Arena* arena) {
  return Arena::CreateInternal< ::sentencepiece::NBestSentencePieceText >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)