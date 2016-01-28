// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: movemessage.proto

#ifndef PROTOBUF_movemessage_2eproto__INCLUDED
#define PROTOBUF_movemessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace aiconnector {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_movemessage_2eproto();
void protobuf_AssignDesc_movemessage_2eproto();
void protobuf_ShutdownFile_movemessage_2eproto();

class Move;
class MoveMessage;
class Move_Piece;

enum MoveMessage_RequestType {
  MoveMessage_RequestType_GET_MOVE = 0,
  MoveMessage_RequestType_SET_MOVE = 1,
  MoveMessage_RequestType_MoveMessage_RequestType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MoveMessage_RequestType_MoveMessage_RequestType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MoveMessage_RequestType_IsValid(int value);
const MoveMessage_RequestType MoveMessage_RequestType_RequestType_MIN = MoveMessage_RequestType_GET_MOVE;
const MoveMessage_RequestType MoveMessage_RequestType_RequestType_MAX = MoveMessage_RequestType_SET_MOVE;
const int MoveMessage_RequestType_RequestType_ARRAYSIZE = MoveMessage_RequestType_RequestType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MoveMessage_RequestType_descriptor();
inline const ::std::string& MoveMessage_RequestType_Name(MoveMessage_RequestType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MoveMessage_RequestType_descriptor(), value);
}
inline bool MoveMessage_RequestType_Parse(
    const ::std::string& name, MoveMessage_RequestType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MoveMessage_RequestType>(
    MoveMessage_RequestType_descriptor(), name, value);
}
enum MoveMessage_ResponseType {
  MoveMessage_ResponseType_MOVE = 0,
  MoveMessage_ResponseType_OK = 1,
  MoveMessage_ResponseType_ERROR = 2,
  MoveMessage_ResponseType_MoveMessage_ResponseType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MoveMessage_ResponseType_MoveMessage_ResponseType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MoveMessage_ResponseType_IsValid(int value);
const MoveMessage_ResponseType MoveMessage_ResponseType_ResponseType_MIN = MoveMessage_ResponseType_MOVE;
const MoveMessage_ResponseType MoveMessage_ResponseType_ResponseType_MAX = MoveMessage_ResponseType_ERROR;
const int MoveMessage_ResponseType_ResponseType_ARRAYSIZE = MoveMessage_ResponseType_ResponseType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MoveMessage_ResponseType_descriptor();
inline const ::std::string& MoveMessage_ResponseType_Name(MoveMessage_ResponseType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MoveMessage_ResponseType_descriptor(), value);
}
inline bool MoveMessage_ResponseType_Parse(
    const ::std::string& name, MoveMessage_ResponseType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MoveMessage_ResponseType>(
    MoveMessage_ResponseType_descriptor(), name, value);
}
// ===================================================================

class Move_Piece : public ::google::protobuf::Message {
 public:
  Move_Piece();
  virtual ~Move_Piece();

  Move_Piece(const Move_Piece& from);

  inline Move_Piece& operator=(const Move_Piece& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Move_Piece& default_instance();

  void Swap(Move_Piece* other);

  // implements Message ----------------------------------------------

  inline Move_Piece* New() const { return New(NULL); }

  Move_Piece* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Move_Piece& from);
  void MergeFrom(const Move_Piece& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Move_Piece* other);
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

  // optional string type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // optional int32 location = 2;
  void clear_location();
  static const int kLocationFieldNumber = 2;
  ::google::protobuf::int32 location() const;
  void set_location(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:aiconnector.Move.Piece)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::int32 location_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_movemessage_2eproto();
  friend void protobuf_AssignDesc_movemessage_2eproto();
  friend void protobuf_ShutdownFile_movemessage_2eproto();

  void InitAsDefaultInstance();
  static Move_Piece* default_instance_;
};
// -------------------------------------------------------------------

class Move : public ::google::protobuf::Message {
 public:
  Move();
  virtual ~Move();

  Move(const Move& from);

  inline Move& operator=(const Move& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Move& default_instance();

  void Swap(Move* other);

  // implements Message ----------------------------------------------

  inline Move* New() const { return New(NULL); }

  Move* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Move& from);
  void MergeFrom(const Move& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Move* other);
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

  typedef Move_Piece Piece;

  // accessors -------------------------------------------------------

  // optional .aiconnector.Move.Piece newpiece = 1;
  bool has_newpiece() const;
  void clear_newpiece();
  static const int kNewpieceFieldNumber = 1;
  const ::aiconnector::Move_Piece& newpiece() const;
  ::aiconnector::Move_Piece* mutable_newpiece();
  ::aiconnector::Move_Piece* release_newpiece();
  void set_allocated_newpiece(::aiconnector::Move_Piece* newpiece);

  // repeated .aiconnector.Move.Piece removedpieces = 2;
  int removedpieces_size() const;
  void clear_removedpieces();
  static const int kRemovedpiecesFieldNumber = 2;
  const ::aiconnector::Move_Piece& removedpieces(int index) const;
  ::aiconnector::Move_Piece* mutable_removedpieces(int index);
  ::aiconnector::Move_Piece* add_removedpieces();
  ::google::protobuf::RepeatedPtrField< ::aiconnector::Move_Piece >*
      mutable_removedpieces();
  const ::google::protobuf::RepeatedPtrField< ::aiconnector::Move_Piece >&
      removedpieces() const;

  // @@protoc_insertion_point(class_scope:aiconnector.Move)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::aiconnector::Move_Piece* newpiece_;
  ::google::protobuf::RepeatedPtrField< ::aiconnector::Move_Piece > removedpieces_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_movemessage_2eproto();
  friend void protobuf_AssignDesc_movemessage_2eproto();
  friend void protobuf_ShutdownFile_movemessage_2eproto();

  void InitAsDefaultInstance();
  static Move* default_instance_;
};
// -------------------------------------------------------------------

class MoveMessage : public ::google::protobuf::Message {
 public:
  MoveMessage();
  virtual ~MoveMessage();

  MoveMessage(const MoveMessage& from);

  inline MoveMessage& operator=(const MoveMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MoveMessage& default_instance();

  void Swap(MoveMessage* other);

  // implements Message ----------------------------------------------

  inline MoveMessage* New() const { return New(NULL); }

  MoveMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MoveMessage& from);
  void MergeFrom(const MoveMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MoveMessage* other);
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

  typedef MoveMessage_RequestType RequestType;
  static const RequestType GET_MOVE = MoveMessage_RequestType_GET_MOVE;
  static const RequestType SET_MOVE = MoveMessage_RequestType_SET_MOVE;
  static inline bool RequestType_IsValid(int value) {
    return MoveMessage_RequestType_IsValid(value);
  }
  static const RequestType RequestType_MIN =
    MoveMessage_RequestType_RequestType_MIN;
  static const RequestType RequestType_MAX =
    MoveMessage_RequestType_RequestType_MAX;
  static const int RequestType_ARRAYSIZE =
    MoveMessage_RequestType_RequestType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  RequestType_descriptor() {
    return MoveMessage_RequestType_descriptor();
  }
  static inline const ::std::string& RequestType_Name(RequestType value) {
    return MoveMessage_RequestType_Name(value);
  }
  static inline bool RequestType_Parse(const ::std::string& name,
      RequestType* value) {
    return MoveMessage_RequestType_Parse(name, value);
  }

  typedef MoveMessage_ResponseType ResponseType;
  static const ResponseType MOVE = MoveMessage_ResponseType_MOVE;
  static const ResponseType OK = MoveMessage_ResponseType_OK;
  static const ResponseType ERROR = MoveMessage_ResponseType_ERROR;
  static inline bool ResponseType_IsValid(int value) {
    return MoveMessage_ResponseType_IsValid(value);
  }
  static const ResponseType ResponseType_MIN =
    MoveMessage_ResponseType_ResponseType_MIN;
  static const ResponseType ResponseType_MAX =
    MoveMessage_ResponseType_ResponseType_MAX;
  static const int ResponseType_ARRAYSIZE =
    MoveMessage_ResponseType_ResponseType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ResponseType_descriptor() {
    return MoveMessage_ResponseType_descriptor();
  }
  static inline const ::std::string& ResponseType_Name(ResponseType value) {
    return MoveMessage_ResponseType_Name(value);
  }
  static inline bool ResponseType_Parse(const ::std::string& name,
      ResponseType* value) {
    return MoveMessage_ResponseType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .aiconnector.MoveMessage.RequestType requesttype = 1;
  void clear_requesttype();
  static const int kRequesttypeFieldNumber = 1;
  ::aiconnector::MoveMessage_RequestType requesttype() const;
  void set_requesttype(::aiconnector::MoveMessage_RequestType value);

  // optional .aiconnector.MoveMessage.ResponseType responsetype = 2;
  void clear_responsetype();
  static const int kResponsetypeFieldNumber = 2;
  ::aiconnector::MoveMessage_ResponseType responsetype() const;
  void set_responsetype(::aiconnector::MoveMessage_ResponseType value);

  // optional .aiconnector.Move move = 3;
  bool has_move() const;
  void clear_move();
  static const int kMoveFieldNumber = 3;
  const ::aiconnector::Move& move() const;
  ::aiconnector::Move* mutable_move();
  ::aiconnector::Move* release_move();
  void set_allocated_move(::aiconnector::Move* move);

  // @@protoc_insertion_point(class_scope:aiconnector.MoveMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int requesttype_;
  int responsetype_;
  ::aiconnector::Move* move_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_movemessage_2eproto();
  friend void protobuf_AssignDesc_movemessage_2eproto();
  friend void protobuf_ShutdownFile_movemessage_2eproto();

  void InitAsDefaultInstance();
  static MoveMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Move_Piece

// optional string type = 1;
inline void Move_Piece::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Move_Piece::type() const {
  // @@protoc_insertion_point(field_get:aiconnector.Move.Piece.type)
  return type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Move_Piece::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aiconnector.Move.Piece.type)
}
inline void Move_Piece::set_type(const char* value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aiconnector.Move.Piece.type)
}
inline void Move_Piece::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aiconnector.Move.Piece.type)
}
inline ::std::string* Move_Piece::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:aiconnector.Move.Piece.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Move_Piece::release_type() {
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Move_Piece::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:aiconnector.Move.Piece.type)
}

// optional int32 location = 2;
inline void Move_Piece::clear_location() {
  location_ = 0;
}
inline ::google::protobuf::int32 Move_Piece::location() const {
  // @@protoc_insertion_point(field_get:aiconnector.Move.Piece.location)
  return location_;
}
inline void Move_Piece::set_location(::google::protobuf::int32 value) {
  
  location_ = value;
  // @@protoc_insertion_point(field_set:aiconnector.Move.Piece.location)
}

// -------------------------------------------------------------------

// Move

// optional .aiconnector.Move.Piece newpiece = 1;
inline bool Move::has_newpiece() const {
  return !_is_default_instance_ && newpiece_ != NULL;
}
inline void Move::clear_newpiece() {
  if (GetArenaNoVirtual() == NULL && newpiece_ != NULL) delete newpiece_;
  newpiece_ = NULL;
}
inline const ::aiconnector::Move_Piece& Move::newpiece() const {
  // @@protoc_insertion_point(field_get:aiconnector.Move.newpiece)
  return newpiece_ != NULL ? *newpiece_ : *default_instance_->newpiece_;
}
inline ::aiconnector::Move_Piece* Move::mutable_newpiece() {
  
  if (newpiece_ == NULL) {
    newpiece_ = new ::aiconnector::Move_Piece;
  }
  // @@protoc_insertion_point(field_mutable:aiconnector.Move.newpiece)
  return newpiece_;
}
inline ::aiconnector::Move_Piece* Move::release_newpiece() {
  
  ::aiconnector::Move_Piece* temp = newpiece_;
  newpiece_ = NULL;
  return temp;
}
inline void Move::set_allocated_newpiece(::aiconnector::Move_Piece* newpiece) {
  delete newpiece_;
  newpiece_ = newpiece;
  if (newpiece) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aiconnector.Move.newpiece)
}

// repeated .aiconnector.Move.Piece removedpieces = 2;
inline int Move::removedpieces_size() const {
  return removedpieces_.size();
}
inline void Move::clear_removedpieces() {
  removedpieces_.Clear();
}
inline const ::aiconnector::Move_Piece& Move::removedpieces(int index) const {
  // @@protoc_insertion_point(field_get:aiconnector.Move.removedpieces)
  return removedpieces_.Get(index);
}
inline ::aiconnector::Move_Piece* Move::mutable_removedpieces(int index) {
  // @@protoc_insertion_point(field_mutable:aiconnector.Move.removedpieces)
  return removedpieces_.Mutable(index);
}
inline ::aiconnector::Move_Piece* Move::add_removedpieces() {
  // @@protoc_insertion_point(field_add:aiconnector.Move.removedpieces)
  return removedpieces_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aiconnector::Move_Piece >*
Move::mutable_removedpieces() {
  // @@protoc_insertion_point(field_mutable_list:aiconnector.Move.removedpieces)
  return &removedpieces_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aiconnector::Move_Piece >&
Move::removedpieces() const {
  // @@protoc_insertion_point(field_list:aiconnector.Move.removedpieces)
  return removedpieces_;
}

// -------------------------------------------------------------------

// MoveMessage

// optional .aiconnector.MoveMessage.RequestType requesttype = 1;
inline void MoveMessage::clear_requesttype() {
  requesttype_ = 0;
}
inline ::aiconnector::MoveMessage_RequestType MoveMessage::requesttype() const {
  // @@protoc_insertion_point(field_get:aiconnector.MoveMessage.requesttype)
  return static_cast< ::aiconnector::MoveMessage_RequestType >(requesttype_);
}
inline void MoveMessage::set_requesttype(::aiconnector::MoveMessage_RequestType value) {
  
  requesttype_ = value;
  // @@protoc_insertion_point(field_set:aiconnector.MoveMessage.requesttype)
}

// optional .aiconnector.MoveMessage.ResponseType responsetype = 2;
inline void MoveMessage::clear_responsetype() {
  responsetype_ = 0;
}
inline ::aiconnector::MoveMessage_ResponseType MoveMessage::responsetype() const {
  // @@protoc_insertion_point(field_get:aiconnector.MoveMessage.responsetype)
  return static_cast< ::aiconnector::MoveMessage_ResponseType >(responsetype_);
}
inline void MoveMessage::set_responsetype(::aiconnector::MoveMessage_ResponseType value) {
  
  responsetype_ = value;
  // @@protoc_insertion_point(field_set:aiconnector.MoveMessage.responsetype)
}

// optional .aiconnector.Move move = 3;
inline bool MoveMessage::has_move() const {
  return !_is_default_instance_ && move_ != NULL;
}
inline void MoveMessage::clear_move() {
  if (GetArenaNoVirtual() == NULL && move_ != NULL) delete move_;
  move_ = NULL;
}
inline const ::aiconnector::Move& MoveMessage::move() const {
  // @@protoc_insertion_point(field_get:aiconnector.MoveMessage.move)
  return move_ != NULL ? *move_ : *default_instance_->move_;
}
inline ::aiconnector::Move* MoveMessage::mutable_move() {
  
  if (move_ == NULL) {
    move_ = new ::aiconnector::Move;
  }
  // @@protoc_insertion_point(field_mutable:aiconnector.MoveMessage.move)
  return move_;
}
inline ::aiconnector::Move* MoveMessage::release_move() {
  
  ::aiconnector::Move* temp = move_;
  move_ = NULL;
  return temp;
}
inline void MoveMessage::set_allocated_move(::aiconnector::Move* move) {
  delete move_;
  move_ = move;
  if (move) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aiconnector.MoveMessage.move)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace aiconnector

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::aiconnector::MoveMessage_RequestType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::aiconnector::MoveMessage_RequestType>() {
  return ::aiconnector::MoveMessage_RequestType_descriptor();
}
template <> struct is_proto_enum< ::aiconnector::MoveMessage_ResponseType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::aiconnector::MoveMessage_ResponseType>() {
  return ::aiconnector::MoveMessage_ResponseType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_movemessage_2eproto__INCLUDED
