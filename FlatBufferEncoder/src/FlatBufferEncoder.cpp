#include "FlatBufferEncoder.h"
#include "Schema_generated.h"
#include <iostream>
#include <fstream>
using namespace Data;
int main()
{
	std::string path;
	std::cout << "Give the path of the folder where the .bin file should be created! : ";
	std::cin >> path;
	std::cout << std::endl;
	path += "\fb_bytes.bin";
	std::cout << "Press 1 to encode client as person : Press any other key to encode client as group ";
	char input = getchar();
	flatbuffers::FlatBufferBuilder builder(1024);
	if (input == 49)
	{
		auto personname = builder.CreateString("Ram");
		auto age = 21;
		auto weight = 76.5;
		auto gender = BinaryGender::BinaryGender_Male;

		auto clientperson = CreatePerson(builder, personname, age, weight, gender);
		auto client = CreateClient(builder, ClientType::ClientType_Person, clientperson.Union());
		builder.Finish(client);
	}
	else
	{
		auto groupname = builder.CreateString("FightClub");
		auto averageAge = 24.5;
		float averageWeight = 66;
		std::vector<std::string> Names = { "Ram","Shayam","Raghuveer" };
		auto nameslist = builder.CreateVectorOfStrings(Names);
		auto clientgroup = CreateGroup(builder, groupname, averageAge, averageWeight, nameslist);
		auto client = CreateClient(builder, ClientType::ClientType_Group, clientgroup.Union());

	}
	
	

	uint8_t *buf = builder.GetBufferPointer();
	std::ofstream Flatostream;
	Flatostream.open(path, std::ios::out | std::ios::binary);
	int size = builder.GetSize();
	Flatostream.write((const char*)buf, size);
	Flatostream.close();

	return 0;
}