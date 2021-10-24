cmake_minimum_required(VERSION 3.20)
project(Labs)

set(CMAKE_CXX_STANDARD 14)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

set(SOURCE_FILES main.cpp)

add_executable(Labs main.cpp)
add_executable(Test test.cpp)

add_executable(Labs2 labs.cpp)
