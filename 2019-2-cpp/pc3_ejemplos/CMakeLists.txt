cmake_minimum_required(VERSION 3.14)
project(pc3_ejemplos)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")
add_executable(pc3_ejemplos
        CBancoCentral.cpp
        CBancoCentral.h
        CCliente.cpp
        CCliente.h
        main.cpp
        Tipos.h)
