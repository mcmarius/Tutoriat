cmake_minimum_required(VERSION 3.6)
project(Tutoriat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp European.cpp Roman.cpp Francez.cpp include.h)
add_executable(Tutoriat2 ${SOURCE_FILES})
