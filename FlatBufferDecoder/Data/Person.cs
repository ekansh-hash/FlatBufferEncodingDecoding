// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace Data
{

using global::System;
using global::System.Collections.Generic;
using global::FlatBuffers;

public struct Person : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_2_0_0(); }
  public static Person GetRootAsPerson(ByteBuffer _bb) { return GetRootAsPerson(_bb, new Person()); }
  public static Person GetRootAsPerson(ByteBuffer _bb, Person obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public Person __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public string Name { get { int o = __p.__offset(4); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetNameBytes() { return __p.__vector_as_span<byte>(4, 1); }
#else
  public ArraySegment<byte>? GetNameBytes() { return __p.__vector_as_arraysegment(4); }
#endif
  public byte[] GetNameArray() { return __p.__vector_as_array<byte>(4); }
  public short Age { get { int o = __p.__offset(6); return o != 0 ? __p.bb.GetShort(o + __p.bb_pos) : (short)0; } }
  public float Weight { get { int o = __p.__offset(8); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public Data.BinaryGender Gender { get { int o = __p.__offset(10); return o != 0 ? (Data.BinaryGender)__p.bb.GetSbyte(o + __p.bb_pos) : Data.BinaryGender.Male; } }

  public static Offset<Data.Person> CreatePerson(FlatBufferBuilder builder,
      StringOffset nameOffset = default(StringOffset),
      short age = 0,
      float weight = 0.0f,
      Data.BinaryGender gender = Data.BinaryGender.Male) {
    builder.StartTable(4);
    Person.AddWeight(builder, weight);
    Person.AddName(builder, nameOffset);
    Person.AddAge(builder, age);
    Person.AddGender(builder, gender);
    return Person.EndPerson(builder);
  }

  public static void StartPerson(FlatBufferBuilder builder) { builder.StartTable(4); }
  public static void AddName(FlatBufferBuilder builder, StringOffset nameOffset) { builder.AddOffset(0, nameOffset.Value, 0); }
  public static void AddAge(FlatBufferBuilder builder, short age) { builder.AddShort(1, age, 0); }
  public static void AddWeight(FlatBufferBuilder builder, float weight) { builder.AddFloat(2, weight, 0.0f); }
  public static void AddGender(FlatBufferBuilder builder, Data.BinaryGender gender) { builder.AddSbyte(3, (sbyte)gender, 0); }
  public static Offset<Data.Person> EndPerson(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<Data.Person>(o);
  }
};


}