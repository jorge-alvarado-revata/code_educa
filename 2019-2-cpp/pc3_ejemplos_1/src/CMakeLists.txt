cmake_minimum_required(VERSION 3.14)
project(src)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")
include_directories(.)

add_executable(src
        CLavadora.cpp
        CLavadora.h
        CMotor.cpp
        CMotor.h
        Ctambor.cpp
        CTambor.h
        main.cpp
        Tipos.h)
