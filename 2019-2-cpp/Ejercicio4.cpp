//
// Created by Jorge Alvarado on 04/11/2019.
//
#include "tipos.h"
#include <iostream>
class Persona {
private:
    real peso;
    entero edad;
    caracter* nombre;
public:
    Persona(entero _edad):edad{_edad}, peso{0.0}{ nombre = nullptr;}
    Persona(caracter * _nombre):edad{0}, peso{0}, nombre{_nombre}{}
    void print(){std::cout << "peso:" << peso << " edad:" << edad << "nombre:" << nombre; }
};
int main() {
    Persona p1 = 5;
    Persona p2 = "Juan";
    p1.print();
    p2.print();
}