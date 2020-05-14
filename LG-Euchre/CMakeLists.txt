cmake_minimum_required(VERSION 3.9.2)

project(EuchreEval)


include_directories(.)

find_package(Threads)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -Wall -Wextra -Werror")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  # using Visual Studio C++
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
endif()

set(MAIN_FILE src/main.cpp)
add_executable(EuchreEval ${MAIN_FILE} src/main.cpp src/Card.cpp src/Deck.cpp src/EuchreDealer.cpp)
