cmake_minimum_required(VERSION 3.9)
project(CPP_SimpleBeginnerExamples)

set(CMAKE_CXX_STANDARD 11)

add_executable(CPP_Beginner main.cpp
        MemoryManagement/Person.h MemoryManagement/Person.cpp
        Example.cpp Example.h
        MemoryManagement/MemoryManagement.cpp MemoryManagement/MemoryManagement.h
        ReferenceTypes/ReferenceTypes.cpp ReferenceTypes/ReferenceTypes.h
        BasicDataTypes/BasicDataTypes.cpp BasicDataTypes/BasicDataTypes.h
        StreamsAndFiles/StreamAndFiles.cpp StreamsAndFiles/StreamAndFiles.h)
