cmake_minimum_required(VERSION 3.14)
project(subtyping)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -pedantic -Wall")
add_executable(subtyping main.cpp AbstractPoligono.h Elipse.h Elipse.cpp Paralelograma.h Paralelograma.cpp Triangulo.h Triangulo.cpp Poligono.h Poligono.cpp)