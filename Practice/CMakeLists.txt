cmake_minimum_required(VERSION 3.23)
project(practice)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE Debug)

#add_executable(practice setInteraction.cpp hashExample.cpp reverseString.cpp)

add_executable(hashExample hashExample.cpp)

add_executable(dptest.cpp dptest.cpp)

add_executable(reverseString.cpp reverseString.cpp)