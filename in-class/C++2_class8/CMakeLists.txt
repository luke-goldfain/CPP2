cmake_minimum_required(VERSION 2.8)

project(graph)

find_package(Threads)

set(CMAKE_CXX_STANDARD 11)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -pthread")

set(MAIN_FILE src/graph.cpp)

add_executable(graph src/graph.cpp)