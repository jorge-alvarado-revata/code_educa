cmake_minimum_required(VERSION 3.14)
project(archivos_sol)

set(CMAKE_CXX_STANDARD 14)

include_directories(.vscode)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")
add_executable(archivos_sol
        .vscode/CAleatorio.cpp
        .vscode/CAleatorio.h
        .vscode/Main.cpp
        .vscode/Tipos.h)
