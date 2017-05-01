set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pedantic -Wall")

set(SOURCE_FILES #[[main_.cpp]] main.cpp Locuinta.cpp Apartament.cpp Casa.cpp)
add_executable(TestLab9 ${SOURCE_FILES})