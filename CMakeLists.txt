cmake_minimum_required(VERSION 3.20)
project(CPlusPlusThreadsDemo)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable(CPlusPlusThreadsDemo main.cpp)
