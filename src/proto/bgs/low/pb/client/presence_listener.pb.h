// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bgs/low/pb/client/presence_listener.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "bgs/low/pb/client/presence_types.pb.h"
#include "bgs/low/pb/client/account_types.pb.h"
#include "bgs/low/pb/client/rpc_types.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto;
namespace bgs {
namespace protocol {
namespace presence {
namespace v1 {
class StateChangedNotification;
class StateChangedNotificationDefaultTypeInternal;
extern StateChangedNotificationDefaultTypeInternal _StateChangedNotification_default_instance_;
class SubscribeNotification;
class SubscribeNotificationDefaultTypeInternal;
extern SubscribeNotificationDefaultTypeInternal _SubscribeNotification_default_instance_;
}  // namespace v1
}  // namespace presence
}  // namespace protocol
}  // namespace bgs
PROTOBUF_NAMESPACE_OPEN
template<> ::bgs::protocol::presence::v1::StateChangedNotification* Arena::CreateMaybeMessage<::bgs::protocol::presence::v1::StateChangedNotification>(Arena*);
template<> ::bgs::protocol::presence::v1::SubscribeNotification* Arena::CreateMaybeMessage<::bgs::protocol::presence::v1::SubscribeNotification>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace bgs {
namespace protocol {
namespace presence {
namespace v1 {

// ===================================================================

class SubscribeNotification :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bgs.protocol.presence.v1.SubscribeNotification) */ {
 public:
  SubscribeNotification();
  virtual ~SubscribeNotification();

  SubscribeNotification(const SubscribeNotification& from);
  SubscribeNotification(SubscribeNotification&& from) noexcept
    : SubscribeNotification() {
    *this = ::std::move(from);
  }

  inline SubscribeNotification& operator=(const SubscribeNotification& from) {
    CopyFrom(from);
    return *this;
  }
  inline SubscribeNotification& operator=(SubscribeNotification&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SubscribeNotification& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SubscribeNotification* internal_default_instance() {
    return reinterpret_cast<const SubscribeNotification*>(
               &_SubscribeNotification_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SubscribeNotification& a, SubscribeNotification& b) {
    a.Swap(&b);
  }
  inline void Swap(SubscribeNotification* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SubscribeNotification* New() const final {
    return CreateMaybeMessage<SubscribeNotification>(nullptr);
  }

  SubscribeNotification* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SubscribeNotification>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SubscribeNotification& from);
  void MergeFrom(const SubscribeNotification& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SubscribeNotification* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bgs.protocol.presence.v1.SubscribeNotification";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto);
    return ::descriptor_table_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStateFieldNumber = 2,
    kSubscriberIdFieldNumber = 1,
  };
  // repeated .bgs.protocol.presence.v1.PresenceState state = 2;
  int state_size() const;
  private:
  int _internal_state_size() const;
  public:
  void clear_state();
  ::bgs::protocol::presence::v1::PresenceState* mutable_state(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState >*
      mutable_state();
  private:
  const ::bgs::protocol::presence::v1::PresenceState& _internal_state(int index) const;
  ::bgs::protocol::presence::v1::PresenceState* _internal_add_state();
  public:
  const ::bgs::protocol::presence::v1::PresenceState& state(int index) const;
  ::bgs::protocol::presence::v1::PresenceState* add_state();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState >&
      state() const;

  // optional .bgs.protocol.account.v1.AccountId subscriber_id = 1;
  bool has_subscriber_id() const;
  private:
  bool _internal_has_subscriber_id() const;
  public:
  void clear_subscriber_id();
  const ::bgs::protocol::account::v1::AccountId& subscriber_id() const;
  ::bgs::protocol::account::v1::AccountId* release_subscriber_id();
  ::bgs::protocol::account::v1::AccountId* mutable_subscriber_id();
  void set_allocated_subscriber_id(::bgs::protocol::account::v1::AccountId* subscriber_id);
  private:
  const ::bgs::protocol::account::v1::AccountId& _internal_subscriber_id() const;
  ::bgs::protocol::account::v1::AccountId* _internal_mutable_subscriber_id();
  public:

  // @@protoc_insertion_point(class_scope:bgs.protocol.presence.v1.SubscribeNotification)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState > state_;
  ::bgs::protocol::account::v1::AccountId* subscriber_id_;
  friend struct ::TableStruct_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto;
};
// -------------------------------------------------------------------

class StateChangedNotification :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bgs.protocol.presence.v1.StateChangedNotification) */ {
 public:
  StateChangedNotification();
  virtual ~StateChangedNotification();

  StateChangedNotification(const StateChangedNotification& from);
  StateChangedNotification(StateChangedNotification&& from) noexcept
    : StateChangedNotification() {
    *this = ::std::move(from);
  }

  inline StateChangedNotification& operator=(const StateChangedNotification& from) {
    CopyFrom(from);
    return *this;
  }
  inline StateChangedNotification& operator=(StateChangedNotification&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const StateChangedNotification& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StateChangedNotification* internal_default_instance() {
    return reinterpret_cast<const StateChangedNotification*>(
               &_StateChangedNotification_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StateChangedNotification& a, StateChangedNotification& b) {
    a.Swap(&b);
  }
  inline void Swap(StateChangedNotification* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StateChangedNotification* New() const final {
    return CreateMaybeMessage<StateChangedNotification>(nullptr);
  }

  StateChangedNotification* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StateChangedNotification>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StateChangedNotification& from);
  void MergeFrom(const StateChangedNotification& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StateChangedNotification* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bgs.protocol.presence.v1.StateChangedNotification";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto);
    return ::descriptor_table_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStateFieldNumber = 2,
    kSubscriberIdFieldNumber = 1,
  };
  // repeated .bgs.protocol.presence.v1.PresenceState state = 2;
  int state_size() const;
  private:
  int _internal_state_size() const;
  public:
  void clear_state();
  ::bgs::protocol::presence::v1::PresenceState* mutable_state(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState >*
      mutable_state();
  private:
  const ::bgs::protocol::presence::v1::PresenceState& _internal_state(int index) const;
  ::bgs::protocol::presence::v1::PresenceState* _internal_add_state();
  public:
  const ::bgs::protocol::presence::v1::PresenceState& state(int index) const;
  ::bgs::protocol::presence::v1::PresenceState* add_state();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState >&
      state() const;

  // optional .bgs.protocol.account.v1.AccountId subscriber_id = 1;
  bool has_subscriber_id() const;
  private:
  bool _internal_has_subscriber_id() const;
  public:
  void clear_subscriber_id();
  const ::bgs::protocol::account::v1::AccountId& subscriber_id() const;
  ::bgs::protocol::account::v1::AccountId* release_subscriber_id();
  ::bgs::protocol::account::v1::AccountId* mutable_subscriber_id();
  void set_allocated_subscriber_id(::bgs::protocol::account::v1::AccountId* subscriber_id);
  private:
  const ::bgs::protocol::account::v1::AccountId& _internal_subscriber_id() const;
  ::bgs::protocol::account::v1::AccountId* _internal_mutable_subscriber_id();
  public:

  // @@protoc_insertion_point(class_scope:bgs.protocol.presence.v1.StateChangedNotification)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState > state_;
  ::bgs::protocol::account::v1::AccountId* subscriber_id_;
  friend struct ::TableStruct_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SubscribeNotification

// optional .bgs.protocol.account.v1.AccountId subscriber_id = 1;
inline bool SubscribeNotification::_internal_has_subscriber_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || subscriber_id_ != nullptr);
  return value;
}
inline bool SubscribeNotification::has_subscriber_id() const {
  return _internal_has_subscriber_id();
}
inline const ::bgs::protocol::account::v1::AccountId& SubscribeNotification::_internal_subscriber_id() const {
  const ::bgs::protocol::account::v1::AccountId* p = subscriber_id_;
  return p != nullptr ? *p : *reinterpret_cast<const ::bgs::protocol::account::v1::AccountId*>(
      &::bgs::protocol::account::v1::_AccountId_default_instance_);
}
inline const ::bgs::protocol::account::v1::AccountId& SubscribeNotification::subscriber_id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.presence.v1.SubscribeNotification.subscriber_id)
  return _internal_subscriber_id();
}
inline ::bgs::protocol::account::v1::AccountId* SubscribeNotification::release_subscriber_id() {
  // @@protoc_insertion_point(field_release:bgs.protocol.presence.v1.SubscribeNotification.subscriber_id)
  _has_bits_[0] &= ~0x00000001u;
  ::bgs::protocol::account::v1::AccountId* temp = subscriber_id_;
  subscriber_id_ = nullptr;
  return temp;
}
inline ::bgs::protocol::account::v1::AccountId* SubscribeNotification::_internal_mutable_subscriber_id() {
  _has_bits_[0] |= 0x00000001u;
  if (subscriber_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::bgs::protocol::account::v1::AccountId>(GetArenaNoVirtual());
    subscriber_id_ = p;
  }
  return subscriber_id_;
}
inline ::bgs::protocol::account::v1::AccountId* SubscribeNotification::mutable_subscriber_id() {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.presence.v1.SubscribeNotification.subscriber_id)
  return _internal_mutable_subscriber_id();
}
inline void SubscribeNotification::set_allocated_subscriber_id(::bgs::protocol::account::v1::AccountId* subscriber_id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(subscriber_id_);
  }
  if (subscriber_id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      subscriber_id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, subscriber_id, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  subscriber_id_ = subscriber_id;
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.presence.v1.SubscribeNotification.subscriber_id)
}

// repeated .bgs.protocol.presence.v1.PresenceState state = 2;
inline int SubscribeNotification::_internal_state_size() const {
  return state_.size();
}
inline int SubscribeNotification::state_size() const {
  return _internal_state_size();
}
inline ::bgs::protocol::presence::v1::PresenceState* SubscribeNotification::mutable_state(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.presence.v1.SubscribeNotification.state)
  return state_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState >*
SubscribeNotification::mutable_state() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.presence.v1.SubscribeNotification.state)
  return &state_;
}
inline const ::bgs::protocol::presence::v1::PresenceState& SubscribeNotification::_internal_state(int index) const {
  return state_.Get(index);
}
inline const ::bgs::protocol::presence::v1::PresenceState& SubscribeNotification::state(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.presence.v1.SubscribeNotification.state)
  return _internal_state(index);
}
inline ::bgs::protocol::presence::v1::PresenceState* SubscribeNotification::_internal_add_state() {
  return state_.Add();
}
inline ::bgs::protocol::presence::v1::PresenceState* SubscribeNotification::add_state() {
  // @@protoc_insertion_point(field_add:bgs.protocol.presence.v1.SubscribeNotification.state)
  return _internal_add_state();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState >&
SubscribeNotification::state() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.presence.v1.SubscribeNotification.state)
  return state_;
}

// -------------------------------------------------------------------

// StateChangedNotification

// optional .bgs.protocol.account.v1.AccountId subscriber_id = 1;
inline bool StateChangedNotification::_internal_has_subscriber_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || subscriber_id_ != nullptr);
  return value;
}
inline bool StateChangedNotification::has_subscriber_id() const {
  return _internal_has_subscriber_id();
}
inline const ::bgs::protocol::account::v1::AccountId& StateChangedNotification::_internal_subscriber_id() const {
  const ::bgs::protocol::account::v1::AccountId* p = subscriber_id_;
  return p != nullptr ? *p : *reinterpret_cast<const ::bgs::protocol::account::v1::AccountId*>(
      &::bgs::protocol::account::v1::_AccountId_default_instance_);
}
inline const ::bgs::protocol::account::v1::AccountId& StateChangedNotification::subscriber_id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.presence.v1.StateChangedNotification.subscriber_id)
  return _internal_subscriber_id();
}
inline ::bgs::protocol::account::v1::AccountId* StateChangedNotification::release_subscriber_id() {
  // @@protoc_insertion_point(field_release:bgs.protocol.presence.v1.StateChangedNotification.subscriber_id)
  _has_bits_[0] &= ~0x00000001u;
  ::bgs::protocol::account::v1::AccountId* temp = subscriber_id_;
  subscriber_id_ = nullptr;
  return temp;
}
inline ::bgs::protocol::account::v1::AccountId* StateChangedNotification::_internal_mutable_subscriber_id() {
  _has_bits_[0] |= 0x00000001u;
  if (subscriber_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::bgs::protocol::account::v1::AccountId>(GetArenaNoVirtual());
    subscriber_id_ = p;
  }
  return subscriber_id_;
}
inline ::bgs::protocol::account::v1::AccountId* StateChangedNotification::mutable_subscriber_id() {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.presence.v1.StateChangedNotification.subscriber_id)
  return _internal_mutable_subscriber_id();
}
inline void StateChangedNotification::set_allocated_subscriber_id(::bgs::protocol::account::v1::AccountId* subscriber_id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(subscriber_id_);
  }
  if (subscriber_id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      subscriber_id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, subscriber_id, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  subscriber_id_ = subscriber_id;
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.presence.v1.StateChangedNotification.subscriber_id)
}

// repeated .bgs.protocol.presence.v1.PresenceState state = 2;
inline int StateChangedNotification::_internal_state_size() const {
  return state_.size();
}
inline int StateChangedNotification::state_size() const {
  return _internal_state_size();
}
inline ::bgs::protocol::presence::v1::PresenceState* StateChangedNotification::mutable_state(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.presence.v1.StateChangedNotification.state)
  return state_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState >*
StateChangedNotification::mutable_state() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.presence.v1.StateChangedNotification.state)
  return &state_;
}
inline const ::bgs::protocol::presence::v1::PresenceState& StateChangedNotification::_internal_state(int index) const {
  return state_.Get(index);
}
inline const ::bgs::protocol::presence::v1::PresenceState& StateChangedNotification::state(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.presence.v1.StateChangedNotification.state)
  return _internal_state(index);
}
inline ::bgs::protocol::presence::v1::PresenceState* StateChangedNotification::_internal_add_state() {
  return state_.Add();
}
inline ::bgs::protocol::presence::v1::PresenceState* StateChangedNotification::add_state() {
  // @@protoc_insertion_point(field_add:bgs.protocol.presence.v1.StateChangedNotification.state)
  return _internal_add_state();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bgs::protocol::presence::v1::PresenceState >&
StateChangedNotification::state() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.presence.v1.StateChangedNotification.state)
  return state_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace presence
}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_bgs_2flow_2fpb_2fclient_2fpresence_5flistener_2eproto
