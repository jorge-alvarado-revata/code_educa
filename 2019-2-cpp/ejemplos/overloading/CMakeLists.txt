cmake_minimum_required(VERSION 3.14)
project(overloading)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")
add_executable(overloading main.cpp funciones.cpp funciones.h tipos.h Pompa.cpp Pompa.h)