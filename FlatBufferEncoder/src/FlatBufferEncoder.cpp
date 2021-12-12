#include "FlatBufferEncoder.h"
#include "Schema_generated.h"
#include <iostream>
#include <fstream>
using namespace Data;
int main()
{
	flatbuffers::FlatBufferBuilder builder(1024);
	auto personname = builder.CreateString("Ekansh");
	auto age = 24;
	auto weight = 75.5;
	auto gender = BinaryGender::BinaryGender_Male;

	auto clientperson = CreatePerson(builder, personname, age, weight, gender);
	builder.Finish(clientperson);

	uint8_t *buf = builder.GetBufferPointer();
	std::ofstream Flatostream;
	Flatostream.open("../BinaryData/fb_bytes.bin", std::ios::out | std::ios::binary);
	int size = builder.GetSize();
	Flatostream.write((const char*)buf, size);
	Flatostream.close();

	return 0;
}