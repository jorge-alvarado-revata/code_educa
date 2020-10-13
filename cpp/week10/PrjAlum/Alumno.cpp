#include <cmath>
#include "Alumno.h"

Alumno::Alumno() {
    this->dc = 0;
    this->sp1 = 0;
    this->sp2 = 0;
    this->sp3 = 0;
    this->sp4 = 0;
    this->py1 = 0;
    this->py2 = 0;
    this->teo = 0;
}

void Alumno::setNotaDC(double dc){
    this->dc = dc*5.0e-2;
}

void Alumno::setSP(double sp1, double sp2, double sp3, double sp4) {
    this->sp1=sp1*5.0e-2;
    this->sp2=sp2*1.0e-1;
    this->sp3=sp3*1.0e-1;
    this->sp4=sp4*1.0e-1;
}

void Alumno::setPY(double py1, double py2) {
    this->py1 = py1*1.0e-1;
    this->py2 = py2*1.0e-1;
}

void Alumno::setTeo(double teo) {
    this->teo = teo*3.0e-1;
}

double Alumno::getPromedio() {
    double suma = this->dc + this->teo + this->sp1 + this->sp2 + this->sp3 + this->sp4 + this->py1 + this->py2;
    return suma;
}