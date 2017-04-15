cmake_minimum_required(VERSION 3.6)
project(Tutoriat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(unu)
add_subdirectory(doi)
add_subdirectory(trei)
add_subdirectory(patru)
add_subdirectory(other)

set(SOURCE_FILES main.cpp Pacient.cpp Adult.cpp Copil.cpp Data.cpp include.h)
add_executable(Tutoriat ${SOURCE_FILES})
