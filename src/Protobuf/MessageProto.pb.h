// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageProto.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MessageProto_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MessageProto_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MessageProto_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MessageProto_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MessageProto_2eproto;
namespace Proto {
class DropBody;
struct DropBodyDefaultTypeInternal;
extern DropBodyDefaultTypeInternal _DropBody_default_instance_;
class LoginResponse;
struct LoginResponseDefaultTypeInternal;
extern LoginResponseDefaultTypeInternal _LoginResponse_default_instance_;
class UserAccountBody;
struct UserAccountBodyDefaultTypeInternal;
extern UserAccountBodyDefaultTypeInternal _UserAccountBody_default_instance_;
class UserPositionBody;
struct UserPositionBodyDefaultTypeInternal;
extern UserPositionBodyDefaultTypeInternal _UserPositionBody_default_instance_;
}  // namespace Proto
PROTOBUF_NAMESPACE_OPEN
template<> ::Proto::DropBody* Arena::CreateMaybeMessage<::Proto::DropBody>(Arena*);
template<> ::Proto::LoginResponse* Arena::CreateMaybeMessage<::Proto::LoginResponse>(Arena*);
template<> ::Proto::UserAccountBody* Arena::CreateMaybeMessage<::Proto::UserAccountBody>(Arena*);
template<> ::Proto::UserPositionBody* Arena::CreateMaybeMessage<::Proto::UserPositionBody>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Proto {

// ===================================================================

class UserAccountBody final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Proto.UserAccountBody) */ {
 public:
  inline UserAccountBody() : UserAccountBody(nullptr) {}
  ~UserAccountBody() override;
  explicit constexpr UserAccountBody(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UserAccountBody(const UserAccountBody& from);
  UserAccountBody(UserAccountBody&& from) noexcept
    : UserAccountBody() {
    *this = ::std::move(from);
  }

  inline UserAccountBody& operator=(const UserAccountBody& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserAccountBody& operator=(UserAccountBody&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const UserAccountBody& default_instance() {
    return *internal_default_instance();
  }
  static inline const UserAccountBody* internal_default_instance() {
    return reinterpret_cast<const UserAccountBody*>(
               &_UserAccountBody_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UserAccountBody& a, UserAccountBody& b) {
    a.Swap(&b);
  }
  inline void Swap(UserAccountBody* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(UserAccountBody* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UserAccountBody* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UserAccountBody>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UserAccountBody& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const UserAccountBody& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UserAccountBody* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Proto.UserAccountBody";
  }
  protected:
  explicit UserAccountBody(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kPasswdFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string passwd = 2;
  void clear_passwd();
  const std::string& passwd() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_passwd(ArgT0&& arg0, ArgT... args);
  std::string* mutable_passwd();
  PROTOBUF_NODISCARD std::string* release_passwd();
  void set_allocated_passwd(std::string* passwd);
  private:
  const std::string& _internal_passwd() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_passwd(const std::string& value);
  std::string* _internal_mutable_passwd();
  public:

  // @@protoc_insertion_point(class_scope:Proto.UserAccountBody)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr passwd_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MessageProto_2eproto;
};
// -------------------------------------------------------------------

class UserPositionBody final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Proto.UserPositionBody) */ {
 public:
  inline UserPositionBody() : UserPositionBody(nullptr) {}
  ~UserPositionBody() override;
  explicit constexpr UserPositionBody(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UserPositionBody(const UserPositionBody& from);
  UserPositionBody(UserPositionBody&& from) noexcept
    : UserPositionBody() {
    *this = ::std::move(from);
  }

  inline UserPositionBody& operator=(const UserPositionBody& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserPositionBody& operator=(UserPositionBody&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const UserPositionBody& default_instance() {
    return *internal_default_instance();
  }
  static inline const UserPositionBody* internal_default_instance() {
    return reinterpret_cast<const UserPositionBody*>(
               &_UserPositionBody_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(UserPositionBody& a, UserPositionBody& b) {
    a.Swap(&b);
  }
  inline void Swap(UserPositionBody* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(UserPositionBody* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UserPositionBody* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UserPositionBody>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UserPositionBody& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const UserPositionBody& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UserPositionBody* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Proto.UserPositionBody";
  }
  protected:
  explicit UserPositionBody(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDirFieldNumber = 1,
    kIdentityFieldNumber = 2,
    kFramecountFieldNumber = 3,
  };
  // int32 dir = 1;
  void clear_dir();
  int32_t dir() const;
  void set_dir(int32_t value);
  private:
  int32_t _internal_dir() const;
  void _internal_set_dir(int32_t value);
  public:

  // int32 identity = 2;
  void clear_identity();
  int32_t identity() const;
  void set_identity(int32_t value);
  private:
  int32_t _internal_identity() const;
  void _internal_set_identity(int32_t value);
  public:

  // int32 framecount = 3;
  void clear_framecount();
  int32_t framecount() const;
  void set_framecount(int32_t value);
  private:
  int32_t _internal_framecount() const;
  void _internal_set_framecount(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Proto.UserPositionBody)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int32_t dir_;
  int32_t identity_;
  int32_t framecount_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MessageProto_2eproto;
};
// -------------------------------------------------------------------

class LoginResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Proto.LoginResponse) */ {
 public:
  inline LoginResponse() : LoginResponse(nullptr) {}
  ~LoginResponse() override;
  explicit constexpr LoginResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LoginResponse(const LoginResponse& from);
  LoginResponse(LoginResponse&& from) noexcept
    : LoginResponse() {
    *this = ::std::move(from);
  }

  inline LoginResponse& operator=(const LoginResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline LoginResponse& operator=(LoginResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const LoginResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const LoginResponse* internal_default_instance() {
    return reinterpret_cast<const LoginResponse*>(
               &_LoginResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(LoginResponse& a, LoginResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(LoginResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LoginResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LoginResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LoginResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LoginResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const LoginResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LoginResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Proto.LoginResponse";
  }
  protected:
  explicit LoginResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResponseMsgFieldNumber = 2,
    kStatusFieldNumber = 1,
    kIdentityFieldNumber = 3,
  };
  // string responseMsg = 2;
  void clear_responsemsg();
  const std::string& responsemsg() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_responsemsg(ArgT0&& arg0, ArgT... args);
  std::string* mutable_responsemsg();
  PROTOBUF_NODISCARD std::string* release_responsemsg();
  void set_allocated_responsemsg(std::string* responsemsg);
  private:
  const std::string& _internal_responsemsg() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_responsemsg(const std::string& value);
  std::string* _internal_mutable_responsemsg();
  public:

  // bool status = 1;
  void clear_status();
  bool status() const;
  void set_status(bool value);
  private:
  bool _internal_status() const;
  void _internal_set_status(bool value);
  public:

  // int32 identity = 3;
  void clear_identity();
  int32_t identity() const;
  void set_identity(int32_t value);
  private:
  int32_t _internal_identity() const;
  void _internal_set_identity(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Proto.LoginResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr responsemsg_;
  bool status_;
  int32_t identity_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MessageProto_2eproto;
};
// -------------------------------------------------------------------

class DropBody final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Proto.DropBody) */ {
 public:
  inline DropBody() : DropBody(nullptr) {}
  ~DropBody() override;
  explicit constexpr DropBody(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DropBody(const DropBody& from);
  DropBody(DropBody&& from) noexcept
    : DropBody() {
    *this = ::std::move(from);
  }

  inline DropBody& operator=(const DropBody& from) {
    CopyFrom(from);
    return *this;
  }
  inline DropBody& operator=(DropBody&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const DropBody& default_instance() {
    return *internal_default_instance();
  }
  static inline const DropBody* internal_default_instance() {
    return reinterpret_cast<const DropBody*>(
               &_DropBody_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(DropBody& a, DropBody& b) {
    a.Swap(&b);
  }
  inline void Swap(DropBody* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DropBody* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DropBody* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DropBody>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DropBody& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const DropBody& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DropBody* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Proto.DropBody";
  }
  protected:
  explicit DropBody(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdentityFieldNumber = 1,
  };
  // int32 identity = 1;
  void clear_identity();
  int32_t identity() const;
  void set_identity(int32_t value);
  private:
  int32_t _internal_identity() const;
  void _internal_set_identity(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Proto.DropBody)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int32_t identity_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MessageProto_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UserAccountBody

// string name = 1;
inline void UserAccountBody::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& UserAccountBody::name() const {
  // @@protoc_insertion_point(field_get:Proto.UserAccountBody.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void UserAccountBody::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Proto.UserAccountBody.name)
}
inline std::string* UserAccountBody::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Proto.UserAccountBody.name)
  return _s;
}
inline const std::string& UserAccountBody::_internal_name() const {
  return name_.Get();
}
inline void UserAccountBody::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* UserAccountBody::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* UserAccountBody::release_name() {
  // @@protoc_insertion_point(field_release:Proto.UserAccountBody.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void UserAccountBody::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Proto.UserAccountBody.name)
}

// string passwd = 2;
inline void UserAccountBody::clear_passwd() {
  passwd_.ClearToEmpty();
}
inline const std::string& UserAccountBody::passwd() const {
  // @@protoc_insertion_point(field_get:Proto.UserAccountBody.passwd)
  return _internal_passwd();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void UserAccountBody::set_passwd(ArgT0&& arg0, ArgT... args) {
 
 passwd_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Proto.UserAccountBody.passwd)
}
inline std::string* UserAccountBody::mutable_passwd() {
  std::string* _s = _internal_mutable_passwd();
  // @@protoc_insertion_point(field_mutable:Proto.UserAccountBody.passwd)
  return _s;
}
inline const std::string& UserAccountBody::_internal_passwd() const {
  return passwd_.Get();
}
inline void UserAccountBody::_internal_set_passwd(const std::string& value) {
  
  passwd_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* UserAccountBody::_internal_mutable_passwd() {
  
  return passwd_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* UserAccountBody::release_passwd() {
  // @@protoc_insertion_point(field_release:Proto.UserAccountBody.passwd)
  return passwd_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void UserAccountBody::set_allocated_passwd(std::string* passwd) {
  if (passwd != nullptr) {
    
  } else {
    
  }
  passwd_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), passwd,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (passwd_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    passwd_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Proto.UserAccountBody.passwd)
}

// -------------------------------------------------------------------

// UserPositionBody

// int32 dir = 1;
inline void UserPositionBody::clear_dir() {
  dir_ = 0;
}
inline int32_t UserPositionBody::_internal_dir() const {
  return dir_;
}
inline int32_t UserPositionBody::dir() const {
  // @@protoc_insertion_point(field_get:Proto.UserPositionBody.dir)
  return _internal_dir();
}
inline void UserPositionBody::_internal_set_dir(int32_t value) {
  
  dir_ = value;
}
inline void UserPositionBody::set_dir(int32_t value) {
  _internal_set_dir(value);
  // @@protoc_insertion_point(field_set:Proto.UserPositionBody.dir)
}

// int32 identity = 2;
inline void UserPositionBody::clear_identity() {
  identity_ = 0;
}
inline int32_t UserPositionBody::_internal_identity() const {
  return identity_;
}
inline int32_t UserPositionBody::identity() const {
  // @@protoc_insertion_point(field_get:Proto.UserPositionBody.identity)
  return _internal_identity();
}
inline void UserPositionBody::_internal_set_identity(int32_t value) {
  
  identity_ = value;
}
inline void UserPositionBody::set_identity(int32_t value) {
  _internal_set_identity(value);
  // @@protoc_insertion_point(field_set:Proto.UserPositionBody.identity)
}

// int32 framecount = 3;
inline void UserPositionBody::clear_framecount() {
  framecount_ = 0;
}
inline int32_t UserPositionBody::_internal_framecount() const {
  return framecount_;
}
inline int32_t UserPositionBody::framecount() const {
  // @@protoc_insertion_point(field_get:Proto.UserPositionBody.framecount)
  return _internal_framecount();
}
inline void UserPositionBody::_internal_set_framecount(int32_t value) {
  
  framecount_ = value;
}
inline void UserPositionBody::set_framecount(int32_t value) {
  _internal_set_framecount(value);
  // @@protoc_insertion_point(field_set:Proto.UserPositionBody.framecount)
}

// -------------------------------------------------------------------

// LoginResponse

// bool status = 1;
inline void LoginResponse::clear_status() {
  status_ = false;
}
inline bool LoginResponse::_internal_status() const {
  return status_;
}
inline bool LoginResponse::status() const {
  // @@protoc_insertion_point(field_get:Proto.LoginResponse.status)
  return _internal_status();
}
inline void LoginResponse::_internal_set_status(bool value) {
  
  status_ = value;
}
inline void LoginResponse::set_status(bool value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:Proto.LoginResponse.status)
}

// string responseMsg = 2;
inline void LoginResponse::clear_responsemsg() {
  responsemsg_.ClearToEmpty();
}
inline const std::string& LoginResponse::responsemsg() const {
  // @@protoc_insertion_point(field_get:Proto.LoginResponse.responseMsg)
  return _internal_responsemsg();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void LoginResponse::set_responsemsg(ArgT0&& arg0, ArgT... args) {
 
 responsemsg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Proto.LoginResponse.responseMsg)
}
inline std::string* LoginResponse::mutable_responsemsg() {
  std::string* _s = _internal_mutable_responsemsg();
  // @@protoc_insertion_point(field_mutable:Proto.LoginResponse.responseMsg)
  return _s;
}
inline const std::string& LoginResponse::_internal_responsemsg() const {
  return responsemsg_.Get();
}
inline void LoginResponse::_internal_set_responsemsg(const std::string& value) {
  
  responsemsg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* LoginResponse::_internal_mutable_responsemsg() {
  
  return responsemsg_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* LoginResponse::release_responsemsg() {
  // @@protoc_insertion_point(field_release:Proto.LoginResponse.responseMsg)
  return responsemsg_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void LoginResponse::set_allocated_responsemsg(std::string* responsemsg) {
  if (responsemsg != nullptr) {
    
  } else {
    
  }
  responsemsg_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), responsemsg,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (responsemsg_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    responsemsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Proto.LoginResponse.responseMsg)
}

// int32 identity = 3;
inline void LoginResponse::clear_identity() {
  identity_ = 0;
}
inline int32_t LoginResponse::_internal_identity() const {
  return identity_;
}
inline int32_t LoginResponse::identity() const {
  // @@protoc_insertion_point(field_get:Proto.LoginResponse.identity)
  return _internal_identity();
}
inline void LoginResponse::_internal_set_identity(int32_t value) {
  
  identity_ = value;
}
inline void LoginResponse::set_identity(int32_t value) {
  _internal_set_identity(value);
  // @@protoc_insertion_point(field_set:Proto.LoginResponse.identity)
}

// -------------------------------------------------------------------

// DropBody

// int32 identity = 1;
inline void DropBody::clear_identity() {
  identity_ = 0;
}
inline int32_t DropBody::_internal_identity() const {
  return identity_;
}
inline int32_t DropBody::identity() const {
  // @@protoc_insertion_point(field_get:Proto.DropBody.identity)
  return _internal_identity();
}
inline void DropBody::_internal_set_identity(int32_t value) {
  
  identity_ = value;
}
inline void DropBody::set_identity(int32_t value) {
  _internal_set_identity(value);
  // @@protoc_insertion_point(field_set:Proto.DropBody.identity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MessageProto_2eproto
