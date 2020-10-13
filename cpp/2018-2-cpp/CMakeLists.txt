cmake_minimum_required(VERSION 3.7)
project(2018_2_cpp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")

set(SOURCE_FILES main.cpp sumatorias.cpp sumatorias.h)
add_executable(2018_2_cpp ${SOURCE_FILES})