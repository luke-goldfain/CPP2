cmake_minimum_required(VERSION 2.8)

project(mock-user)

include_directories(.)
include(gtest.cmake)

find_package(Threads)

set(CMAKE_CXX_STANDARD 11)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -pthread")

set(UNIT_TESTS test/test.cpp)
set(MAIN_FILE src/mock_user.cpp)

add_executable(mock-user-test ${UNIT_TESTS} src/mock_user.cpp)
target_link_libraries(mock-user-test gtest ${CMAKE_THREAD_LIBS_INIT})