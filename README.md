## Prequisites

There are few prerequistes for compiling/building the application :

* VS 2017 or higher ( I have used VS 2017)
* .net Framework 4.6.1

## Build

* Clone the repository https://github.com/ekansh-hash/FlatBufferEncodingDecoding
* Clone the submodule flatbuffers under the deps folder
* flatbuffers needs to be compiled first for c# (Decoder). To compile the library for c#, Change the path to deps\flatbuffers\net\FlatBuffers(You should find the FlatBuffers.csproj file here and run the command - 
    ```dotnet build -f net46 "FlatBuffers.csproj"```
* If you want to compile the encoder then set FlatBufferEncoder as the Startup Project and build/compile.
* Similarly if you want to compile the decoder then set FlatBufferDecoder as the Startup Project and build/compile.

## How to use!

  ### Encoder

  You need to enter 1 as the input for the encoder to generate the fb_bytes.bin file for the Person. Enter anything else to generate the fb_bytes.bin file for the Group.
  The fb_bytes.bin will be created in the same folder as the executable (If you are running from visual studio then the fb_bytes.bin will be created at the root of the project - Where the .csproj file exists!).

  ### Decoder

  You need to give the path of the fb_bytes.bin file but make sure there are no double quotes in the path that you enter.

  
  
## Executables

The executable for the encoder and the decoder can be found in the Binaries folder at the root of the repository.
The Decoder executable is paired with the FlatBuffers.dll so make sure that the dll file is available in the same directory as the executable.


## Schema

You can find the schema file (Schema.fbs) under the Schema folder in the root of the repository.