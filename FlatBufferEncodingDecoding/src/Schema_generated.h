// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCHEMA_CLIENT_DATA_H_
#define FLATBUFFERS_GENERATED_SCHEMA_CLIENT_DATA_H_

#include "flatbuffers/flatbuffers.h"

namespace Client {
namespace Data {

struct Person;
struct PersonBuilder;

struct Group;
struct GroupBuilder;

enum BinaryGender : int8_t {
  BinaryGender_Male = 0,
  BinaryGender_Female = 1,
  BinaryGender_MIN = BinaryGender_Male,
  BinaryGender_MAX = BinaryGender_Female
};

inline const BinaryGender (&EnumValuesBinaryGender())[2] {
  static const BinaryGender values[] = {
    BinaryGender_Male,
    BinaryGender_Female
  };
  return values;
}

inline const char * const *EnumNamesBinaryGender() {
  static const char * const names[3] = {
    "Male",
    "Female",
    nullptr
  };
  return names;
}

inline const char *EnumNameBinaryGender(BinaryGender e) {
  if (flatbuffers::IsOutRange(e, BinaryGender_Male, BinaryGender_Female)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesBinaryGender()[index];
}

struct Person FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PersonBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_AGE = 6,
    VT_WEIGHT = 8,
    VT_GENDER = 10
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  int16_t age() const {
    return GetField<int16_t>(VT_AGE, 0);
  }
  float weight() const {
    return GetField<float>(VT_WEIGHT, 0.0f);
  }
  Client::Data::BinaryGender gender() const {
    return static_cast<Client::Data::BinaryGender>(GetField<int8_t>(VT_GENDER, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<int16_t>(verifier, VT_AGE) &&
           VerifyField<float>(verifier, VT_WEIGHT) &&
           VerifyField<int8_t>(verifier, VT_GENDER) &&
           verifier.EndTable();
  }
};

struct PersonBuilder {
  typedef Person Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Person::VT_NAME, name);
  }
  void add_age(int16_t age) {
    fbb_.AddElement<int16_t>(Person::VT_AGE, age, 0);
  }
  void add_weight(float weight) {
    fbb_.AddElement<float>(Person::VT_WEIGHT, weight, 0.0f);
  }
  void add_gender(Client::Data::BinaryGender gender) {
    fbb_.AddElement<int8_t>(Person::VT_GENDER, static_cast<int8_t>(gender), 0);
  }
  explicit PersonBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Person> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Person>(end);
    return o;
  }
};

inline flatbuffers::Offset<Person> CreatePerson(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    int16_t age = 0,
    float weight = 0.0f,
    Client::Data::BinaryGender gender = Client::Data::BinaryGender_Male) {
  PersonBuilder builder_(_fbb);
  builder_.add_weight(weight);
  builder_.add_name(name);
  builder_.add_age(age);
  builder_.add_gender(gender);
  return builder_.Finish();
}

inline flatbuffers::Offset<Person> CreatePersonDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    int16_t age = 0,
    float weight = 0.0f,
    Client::Data::BinaryGender gender = Client::Data::BinaryGender_Male) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return Client::Data::CreatePerson(
      _fbb,
      name__,
      age,
      weight,
      gender);
}

struct Group FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef GroupBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_AVERAGE = 6,
    VT_AVERAGEWEIGHT = 8,
    VT_NAMES = 10
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  float average() const {
    return GetField<float>(VT_AVERAGE, 0.0f);
  }
  float averageweight() const {
    return GetField<float>(VT_AVERAGEWEIGHT, 0.0f);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *names() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_NAMES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<float>(verifier, VT_AVERAGE) &&
           VerifyField<float>(verifier, VT_AVERAGEWEIGHT) &&
           VerifyOffset(verifier, VT_NAMES) &&
           verifier.VerifyVector(names()) &&
           verifier.VerifyVectorOfStrings(names()) &&
           verifier.EndTable();
  }
};

struct GroupBuilder {
  typedef Group Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Group::VT_NAME, name);
  }
  void add_average(float average) {
    fbb_.AddElement<float>(Group::VT_AVERAGE, average, 0.0f);
  }
  void add_averageweight(float averageweight) {
    fbb_.AddElement<float>(Group::VT_AVERAGEWEIGHT, averageweight, 0.0f);
  }
  void add_names(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> names) {
    fbb_.AddOffset(Group::VT_NAMES, names);
  }
  explicit GroupBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Group> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Group>(end);
    return o;
  }
};

inline flatbuffers::Offset<Group> CreateGroup(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    float average = 0.0f,
    float averageweight = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> names = 0) {
  GroupBuilder builder_(_fbb);
  builder_.add_names(names);
  builder_.add_averageweight(averageweight);
  builder_.add_average(average);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<Group> CreateGroupDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    float average = 0.0f,
    float averageweight = 0.0f,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *names = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto names__ = names ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*names) : 0;
  return Client::Data::CreateGroup(
      _fbb,
      name__,
      average,
      averageweight,
      names__);
}

}  // namespace Data
}  // namespace Client

#endif  // FLATBUFFERS_GENERATED_SCHEMA_CLIENT_DATA_H_