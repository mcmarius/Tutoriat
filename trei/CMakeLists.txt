set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pedantic -Wall")

set(SOURCE_FILES main.cpp ceva.h)
add_executable(Tutoriat3 ${SOURCE_FILES})