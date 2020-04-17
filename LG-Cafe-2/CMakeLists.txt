cmake_minimum_required(VERSION 3.9.2)

project(Demo)


include_directories(.)
include(gtest.cmake)

find_package(Threads)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -Wall -Wextra -Werror")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  # using Visual Studio C++
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
endif()

set(UNIT_TESTS test/tests.cpp)
set(MAIN_FILE src/main.cpp)
add_executable(Cafe ${MAIN_FILE} src/main.cpp src/Cafe.cpp src/ChangeMaker.cpp)

add_executable(ChangeTest ${UNIT_TESTS} test/tests.cpp src/Cafe.cpp src/ChangeMaker.cpp)
target_link_libraries(ChangeTest gtest ${CMAKE_THREAD_LIBS_INIT})
