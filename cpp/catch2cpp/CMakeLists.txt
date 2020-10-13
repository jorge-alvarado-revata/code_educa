cmake_minimum_required(VERSION 3.14)
project(demo2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")
add_subdirectory(Catch_test)
add_executable(demo2 main.cpp Perros.cpp Perros.h)
