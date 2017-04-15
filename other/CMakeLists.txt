cmake_minimum_required(VERSION 3.6)
project(Tutoriat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES
        #[[main1.cpp
        main2.cpp
        main3.cpp
        ]] main1.cpp)
add_executable(Tutoriat_oth ${SOURCE_FILES})
