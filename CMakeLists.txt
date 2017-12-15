cmake_minimum_required(VERSION 3.10)
project(CPP_SimpleBeginnerExamples)

set(CMAKE_CXX_STANDARD 11)

#add_executable(CPP_Beginner mainReferenceTypes.cpp) #Uncomment to run main Reference Types
add_executable(CPP_Beginner mainMemoryManagement.cpp Person.h Person.cpp) #Uncomment to run main Memory Management
