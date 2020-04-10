cmake_minimum_required(VERSION 2.8)

project(sqrtpow)

include(gtest.cmake)

find_package(Threads)

set(CMAKE_CXX_STANDARD 11)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -pthread")

set(UNIT_TESTS test/tests.cpp)
set(MAIN_FILE src/sqrtpow.cpp)

add_executable(sqrtpow main.cpp sqrtpow.cpp)

add_executable(sqrtpow-tests test/tests.cpp sqrtpow.cpp)
target_link_libraries(sqrtpow-tests gtest ${CMAKE_THREAD_LIBS_INIT})