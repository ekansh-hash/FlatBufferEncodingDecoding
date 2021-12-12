using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Data;
using FlatBuffers;
namespace FlatBufferDecoder
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the path of the .bin file (Remove double quotes from path) : ");
            var filePath = Console.ReadLine();
            Console.WriteLine();
            byte[] data = File.ReadAllBytes(filePath);
            ByteBuffer bb = new ByteBuffer(data);
            Client client = Client.GetRootAsClient(bb);
            if (client.ClientusedType == ClientType.Person)
            {
                var Person = client.ClientusedAsPerson();
                var Name = Person.Name;
                var Age = Person.Age;
                var Weight = Person.Weight;
                var Gender = Person.Gender.ToString();
                Console.WriteLine("{" + Name + "," + Age + "," + Weight + "," + Gender + "}");
            }
            else
            {
                var Group = client.ClientusedAsGroup();
                var GroupName = Group.Name;
                var AverageAge = Group.Average;
                var AverageWeight = Group.Averageweight;
                var TotalClients = Group.NamesLength;
                int NoOfNames = Group.NamesLength;

                string Names = "{";
                for (int clientNo = 0;clientNo<TotalClients; clientNo++)
                {
                    Names += Group.Names(clientNo);
                    NoOfNames--;
                    if (NoOfNames > 0)
                        Names += ",";
                }
                Names += "}";
                Console.WriteLine("{" + GroupName + "," + AverageAge + "," + AverageWeight + "," + Names + "}");
            }
            Console.WriteLine();
            Console.Write("Press any key to close the program!");
            Console.ReadKey();
        }
    }
}
