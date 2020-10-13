//
// Created by Jorge Alvarado on 04/11/2019.
//
#include "tipos.h"
real b = 6;
entero a = 9.99;

entero x = (entero) 3.1415;

class Alumno {
    entero nota1, nota2;
    caracter* name;
public:
    Alumno(entero i) { };
    Alumno(const caracter* n, entero j = 0) { };
};

void add(Alumno) { };

int main() {

    Alumno obj1 = 2; // obj1 = Y(2)

    Alumno obj2 = "somestring"; // obj1 = Y(2)

    obj1 = 10;   // obj1 = Y(10)

    add(5);   // add(Y(5))
}