cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-g -O0 -Wall -Wextra -pedantic")

add_executable(BinaryGap BinaryGap.cpp)
add_executable(CyclicRotation CyclicRotation.cpp)
add_executable(OddOccurrencesInArray OddOccurrencesInArray.cpp)
add_executable(PermMissingElem PermMissingElem.cpp)
