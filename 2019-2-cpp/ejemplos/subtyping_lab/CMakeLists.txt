cmake_minimum_required(VERSION 3.14)
project(CLionProjectssubtyping_lab)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")
add_executable(CLionProjectssubtyping_lab main.cpp AbstractAstro.h tipos.h Planeta.cpp Planeta.h Astro.cpp Astro.h)