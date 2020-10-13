cmake_minimum_required(VERSION 3.14)
project(pc_3_ejemplos_2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")
include_directories(src)

add_executable(pc_3_ejemplos_2
        src/CAlumno.cpp
        src/CAlumno.h
        src/CAula.cpp
        src/CAula.h
        src/main.cpp
        src/Tipos.h)
