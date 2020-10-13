cmake_minimum_required(VERSION 3.7)
project(PrjAlum)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")

set(SOURCE_FILES main.cpp Alumno.h Seccion.h Alumno.cpp Seccion.cpp)
add_executable(PrjAlum ${SOURCE_FILES})