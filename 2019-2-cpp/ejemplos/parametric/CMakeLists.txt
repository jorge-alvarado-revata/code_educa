cmake_minimum_required(VERSION 3.14)
project(parametric)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")
add_executable(parametric main.cpp tipos.h MyArray.h)