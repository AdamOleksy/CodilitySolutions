cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-g -O0 -Wall -Wextra -pedantic")

project(Codility)

add_executable(BinaryGap BinaryGap.cpp)
add_executable(CyclicRotation CyclicRotation.cpp)
add_executable(OddOccurrencesInArray OddOccurrencesInArray.cpp)
add_executable(PermMissingElem PermMissingElem.cpp)
add_executable(FrogJmp FrogJmp.cpp)
add_executable(TapeEquilibrium  TapeEquilibrium.cpp)
add_executable(PermCheck PermCheck.cpp)
add_executable(FrogRiverOne FrogRiverOne.cpp)
add_executable(MaxCounters MaxCounters.cpp)
add_executable(MissingInteger MissingInteger.cpp)
