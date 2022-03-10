// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: exercise_2.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_exercise_5f2_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_exercise_5f2_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_exercise_5f2_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_exercise_5f2_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_exercise_5f2_2eproto;
namespace exercise_2 {
class FullName;
class FullNameDefaultTypeInternal;
extern FullNameDefaultTypeInternal _FullName_default_instance_;
class Student;
class StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentsGroup;
class StudentsGroupDefaultTypeInternal;
extern StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace exercise_2
PROTOBUF_NAMESPACE_OPEN
template<> ::exercise_2::FullName* Arena::CreateMaybeMessage<::exercise_2::FullName>(Arena*);
template<> ::exercise_2::Student* Arena::CreateMaybeMessage<::exercise_2::Student>(Arena*);
template<> ::exercise_2::StudentsGroup* Arena::CreateMaybeMessage<::exercise_2::StudentsGroup>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace exercise_2 {

// ===================================================================

class FullName PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:exercise_2.FullName) */ {
 public:
  inline FullName() : FullName(nullptr) {};
  virtual ~FullName();

  FullName(const FullName& from);
  FullName(FullName&& from) noexcept
    : FullName() {
    *this = ::std::move(from);
  }

  inline FullName& operator=(const FullName& from) {
    CopyFrom(from);
    return *this;
  }
  inline FullName& operator=(FullName&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const FullName& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FullName* internal_default_instance() {
    return reinterpret_cast<const FullName*>(
               &_FullName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FullName& a, FullName& b) {
    a.Swap(&b);
  }
  inline void Swap(FullName* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FullName* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FullName* New() const final {
    return CreateMaybeMessage<FullName>(nullptr);
  }

  FullName* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FullName>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FullName& from);
  void MergeFrom(const FullName& from);
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
  void InternalSwap(FullName* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "exercise_2.FullName";
  }
  protected:
  explicit FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_exercise_5f2_2eproto);
    return ::descriptor_table_exercise_5f2_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kSurnameFieldNumber = 2,
    kPatronymicFieldNumber = 3,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string surname = 2;
  void clear_surname();
  const std::string& surname() const;
  void set_surname(const std::string& value);
  void set_surname(std::string&& value);
  void set_surname(const char* value);
  void set_surname(const char* value, size_t size);
  std::string* mutable_surname();
  std::string* release_surname();
  void set_allocated_surname(std::string* surname);
  private:
  const std::string& _internal_surname() const;
  void _internal_set_surname(const std::string& value);
  std::string* _internal_mutable_surname();
  public:

  // string patronymic = 3;
  bool has_patronymic() const;
  private:
  bool _internal_has_patronymic() const;
  public:
  void clear_patronymic();
  const std::string& patronymic() const;
  void set_patronymic(const std::string& value);
  void set_patronymic(std::string&& value);
  void set_patronymic(const char* value);
  void set_patronymic(const char* value, size_t size);
  std::string* mutable_patronymic();
  std::string* release_patronymic();
  void set_allocated_patronymic(std::string* patronymic);
  private:
  const std::string& _internal_patronymic() const;
  void _internal_set_patronymic(const std::string& value);
  std::string* _internal_mutable_patronymic();
  public:

  // @@protoc_insertion_point(class_scope:exercise_2.FullName)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr surname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr patronymic_;
  friend struct ::TableStruct_exercise_5f2_2eproto;
};
// -------------------------------------------------------------------

class Student PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:exercise_2.Student) */ {
 public:
  inline Student() : Student(nullptr) {};
  virtual ~Student();

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Student& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Student* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return CreateMaybeMessage<Student>(nullptr);
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
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
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "exercise_2.Student";
  }
  protected:
  explicit Student(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_exercise_5f2_2eproto);
    return ::descriptor_table_exercise_5f2_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGradesFieldNumber = 2,
    kNameFieldNumber = 1,
    kAvgScoreFieldNumber = 3,
  };
  // repeated uint32 grades = 2;
  int grades_size() const;
  private:
  int _internal_grades_size() const;
  public:
  void clear_grades();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_grades(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_grades() const;
  void _internal_add_grades(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_grades();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 grades(int index) const;
  void set_grades(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_grades(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      grades() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_grades();

  // .exercise_2.FullName name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const ::exercise_2::FullName& name() const;
  ::exercise_2::FullName* release_name();
  ::exercise_2::FullName* mutable_name();
  void set_allocated_name(::exercise_2::FullName* name);
  private:
  const ::exercise_2::FullName& _internal_name() const;
  ::exercise_2::FullName* _internal_mutable_name();
  public:
  void unsafe_arena_set_allocated_name(
      ::exercise_2::FullName* name);
  ::exercise_2::FullName* unsafe_arena_release_name();

  // uint32 avg_score = 3;
  void clear_avg_score();
  ::PROTOBUF_NAMESPACE_ID::uint32 avg_score() const;
  void set_avg_score(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_avg_score() const;
  void _internal_set_avg_score(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:exercise_2.Student)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > grades_;
  mutable std::atomic<int> _grades_cached_byte_size_;
  ::exercise_2::FullName* name_;
  ::PROTOBUF_NAMESPACE_ID::uint32 avg_score_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_exercise_5f2_2eproto;
};
// -------------------------------------------------------------------

class StudentsGroup PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:exercise_2.StudentsGroup) */ {
 public:
  inline StudentsGroup() : StudentsGroup(nullptr) {};
  virtual ~StudentsGroup();

  StudentsGroup(const StudentsGroup& from);
  StudentsGroup(StudentsGroup&& from) noexcept
    : StudentsGroup() {
    *this = ::std::move(from);
  }

  inline StudentsGroup& operator=(const StudentsGroup& from) {
    CopyFrom(from);
    return *this;
  }
  inline StudentsGroup& operator=(StudentsGroup&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const StudentsGroup& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StudentsGroup* internal_default_instance() {
    return reinterpret_cast<const StudentsGroup*>(
               &_StudentsGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(StudentsGroup& a, StudentsGroup& b) {
    a.Swap(&b);
  }
  inline void Swap(StudentsGroup* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StudentsGroup* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StudentsGroup* New() const final {
    return CreateMaybeMessage<StudentsGroup>(nullptr);
  }

  StudentsGroup* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StudentsGroup>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StudentsGroup& from);
  void MergeFrom(const StudentsGroup& from);
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
  void InternalSwap(StudentsGroup* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "exercise_2.StudentsGroup";
  }
  protected:
  explicit StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_exercise_5f2_2eproto);
    return ::descriptor_table_exercise_5f2_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStudentsFieldNumber = 1,
  };
  // repeated .exercise_2.Student students = 1;
  int students_size() const;
  private:
  int _internal_students_size() const;
  public:
  void clear_students();
  ::exercise_2::Student* mutable_students(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::exercise_2::Student >*
      mutable_students();
  private:
  const ::exercise_2::Student& _internal_students(int index) const;
  ::exercise_2::Student* _internal_add_students();
  public:
  const ::exercise_2::Student& students(int index) const;
  ::exercise_2::Student* add_students();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::exercise_2::Student >&
      students() const;

  // @@protoc_insertion_point(class_scope:exercise_2.StudentsGroup)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::exercise_2::Student > students_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_exercise_5f2_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FullName

// string name = 1;
inline void FullName::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& FullName::name() const {
  // @@protoc_insertion_point(field_get:exercise_2.FullName.name)
  return _internal_name();
}
inline void FullName::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:exercise_2.FullName.name)
}
inline std::string* FullName::mutable_name() {
  // @@protoc_insertion_point(field_mutable:exercise_2.FullName.name)
  return _internal_mutable_name();
}
inline const std::string& FullName::_internal_name() const {
  return name_.Get();
}
inline void FullName::_internal_set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void FullName::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:exercise_2.FullName.name)
}
inline void FullName::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:exercise_2.FullName.name)
}
inline void FullName::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:exercise_2.FullName.name)
}
inline std::string* FullName::_internal_mutable_name() {
  
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* FullName::release_name() {
  // @@protoc_insertion_point(field_release:exercise_2.FullName.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void FullName::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:exercise_2.FullName.name)
}

// string surname = 2;
inline void FullName::clear_surname() {
  surname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& FullName::surname() const {
  // @@protoc_insertion_point(field_get:exercise_2.FullName.surname)
  return _internal_surname();
}
inline void FullName::set_surname(const std::string& value) {
  _internal_set_surname(value);
  // @@protoc_insertion_point(field_set:exercise_2.FullName.surname)
}
inline std::string* FullName::mutable_surname() {
  // @@protoc_insertion_point(field_mutable:exercise_2.FullName.surname)
  return _internal_mutable_surname();
}
inline const std::string& FullName::_internal_surname() const {
  return surname_.Get();
}
inline void FullName::_internal_set_surname(const std::string& value) {
  
  surname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void FullName::set_surname(std::string&& value) {
  
  surname_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:exercise_2.FullName.surname)
}
inline void FullName::set_surname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  surname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:exercise_2.FullName.surname)
}
inline void FullName::set_surname(const char* value,
    size_t size) {
  
  surname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:exercise_2.FullName.surname)
}
inline std::string* FullName::_internal_mutable_surname() {
  
  return surname_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* FullName::release_surname() {
  // @@protoc_insertion_point(field_release:exercise_2.FullName.surname)
  return surname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void FullName::set_allocated_surname(std::string* surname) {
  if (surname != nullptr) {
    
  } else {
    
  }
  surname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), surname,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:exercise_2.FullName.surname)
}

// string patronymic = 3;
inline bool FullName::_internal_has_patronymic() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FullName::has_patronymic() const {
  return _internal_has_patronymic();
}
inline void FullName::clear_patronymic() {
  patronymic_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& FullName::patronymic() const {
  // @@protoc_insertion_point(field_get:exercise_2.FullName.patronymic)
  return _internal_patronymic();
}
inline void FullName::set_patronymic(const std::string& value) {
  _internal_set_patronymic(value);
  // @@protoc_insertion_point(field_set:exercise_2.FullName.patronymic)
}
inline std::string* FullName::mutable_patronymic() {
  // @@protoc_insertion_point(field_mutable:exercise_2.FullName.patronymic)
  return _internal_mutable_patronymic();
}
inline const std::string& FullName::_internal_patronymic() const {
  return patronymic_.Get();
}
inline void FullName::_internal_set_patronymic(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  patronymic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void FullName::set_patronymic(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  patronymic_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:exercise_2.FullName.patronymic)
}
inline void FullName::set_patronymic(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  patronymic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:exercise_2.FullName.patronymic)
}
inline void FullName::set_patronymic(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  patronymic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:exercise_2.FullName.patronymic)
}
inline std::string* FullName::_internal_mutable_patronymic() {
  _has_bits_[0] |= 0x00000001u;
  return patronymic_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* FullName::release_patronymic() {
  // @@protoc_insertion_point(field_release:exercise_2.FullName.patronymic)
  if (!_internal_has_patronymic()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return patronymic_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void FullName::set_allocated_patronymic(std::string* patronymic) {
  if (patronymic != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  patronymic_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), patronymic,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:exercise_2.FullName.patronymic)
}

// -------------------------------------------------------------------

// Student

// .exercise_2.FullName name = 1;
inline bool Student::_internal_has_name() const {
  return this != internal_default_instance() && name_ != nullptr;
}
inline bool Student::has_name() const {
  return _internal_has_name();
}
inline void Student::clear_name() {
  if (GetArena() == nullptr && name_ != nullptr) {
    delete name_;
  }
  name_ = nullptr;
}
inline const ::exercise_2::FullName& Student::_internal_name() const {
  const ::exercise_2::FullName* p = name_;
  return p != nullptr ? *p : *reinterpret_cast<const ::exercise_2::FullName*>(
      &::exercise_2::_FullName_default_instance_);
}
inline const ::exercise_2::FullName& Student::name() const {
  // @@protoc_insertion_point(field_get:exercise_2.Student.name)
  return _internal_name();
}
inline void Student::unsafe_arena_set_allocated_name(
    ::exercise_2::FullName* name) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(name_);
  }
  name_ = name;
  if (name) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:exercise_2.Student.name)
}
inline ::exercise_2::FullName* Student::release_name() {
  
  ::exercise_2::FullName* temp = name_;
  name_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::exercise_2::FullName* Student::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_release:exercise_2.Student.name)
  
  ::exercise_2::FullName* temp = name_;
  name_ = nullptr;
  return temp;
}
inline ::exercise_2::FullName* Student::_internal_mutable_name() {
  
  if (name_ == nullptr) {
    auto* p = CreateMaybeMessage<::exercise_2::FullName>(GetArena());
    name_ = p;
  }
  return name_;
}
inline ::exercise_2::FullName* Student::mutable_name() {
  // @@protoc_insertion_point(field_mutable:exercise_2.Student.name)
  return _internal_mutable_name();
}
inline void Student::set_allocated_name(::exercise_2::FullName* name) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete name_;
  }
  if (name) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(name);
    if (message_arena != submessage_arena) {
      name = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, name, submessage_arena);
    }
    
  } else {
    
  }
  name_ = name;
  // @@protoc_insertion_point(field_set_allocated:exercise_2.Student.name)
}

// repeated uint32 grades = 2;
inline int Student::_internal_grades_size() const {
  return grades_.size();
}
inline int Student::grades_size() const {
  return _internal_grades_size();
}
inline void Student::clear_grades() {
  grades_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Student::_internal_grades(int index) const {
  return grades_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Student::grades(int index) const {
  // @@protoc_insertion_point(field_get:exercise_2.Student.grades)
  return _internal_grades(index);
}
inline void Student::set_grades(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  grades_.Set(index, value);
  // @@protoc_insertion_point(field_set:exercise_2.Student.grades)
}
inline void Student::_internal_add_grades(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  grades_.Add(value);
}
inline void Student::add_grades(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_grades(value);
  // @@protoc_insertion_point(field_add:exercise_2.Student.grades)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
Student::_internal_grades() const {
  return grades_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
Student::grades() const {
  // @@protoc_insertion_point(field_list:exercise_2.Student.grades)
  return _internal_grades();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
Student::_internal_mutable_grades() {
  return &grades_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
Student::mutable_grades() {
  // @@protoc_insertion_point(field_mutable_list:exercise_2.Student.grades)
  return _internal_mutable_grades();
}

// uint32 avg_score = 3;
inline void Student::clear_avg_score() {
  avg_score_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Student::_internal_avg_score() const {
  return avg_score_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Student::avg_score() const {
  // @@protoc_insertion_point(field_get:exercise_2.Student.avg_score)
  return _internal_avg_score();
}
inline void Student::_internal_set_avg_score(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  avg_score_ = value;
}
inline void Student::set_avg_score(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_avg_score(value);
  // @@protoc_insertion_point(field_set:exercise_2.Student.avg_score)
}

// -------------------------------------------------------------------

// StudentsGroup

// repeated .exercise_2.Student students = 1;
inline int StudentsGroup::_internal_students_size() const {
  return students_.size();
}
inline int StudentsGroup::students_size() const {
  return _internal_students_size();
}
inline void StudentsGroup::clear_students() {
  students_.Clear();
}
inline ::exercise_2::Student* StudentsGroup::mutable_students(int index) {
  // @@protoc_insertion_point(field_mutable:exercise_2.StudentsGroup.students)
  return students_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::exercise_2::Student >*
StudentsGroup::mutable_students() {
  // @@protoc_insertion_point(field_mutable_list:exercise_2.StudentsGroup.students)
  return &students_;
}
inline const ::exercise_2::Student& StudentsGroup::_internal_students(int index) const {
  return students_.Get(index);
}
inline const ::exercise_2::Student& StudentsGroup::students(int index) const {
  // @@protoc_insertion_point(field_get:exercise_2.StudentsGroup.students)
  return _internal_students(index);
}
inline ::exercise_2::Student* StudentsGroup::_internal_add_students() {
  return students_.Add();
}
inline ::exercise_2::Student* StudentsGroup::add_students() {
  // @@protoc_insertion_point(field_add:exercise_2.StudentsGroup.students)
  return _internal_add_students();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::exercise_2::Student >&
StudentsGroup::students() const {
  // @@protoc_insertion_point(field_list:exercise_2.StudentsGroup.students)
  return students_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace exercise_2

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_exercise_5f2_2eproto
