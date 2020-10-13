#include <Vector>
#include "Seccion.h"
#include <iostream>

using namespace std;

Seccion::Seccion(unsigned int size){
    this->size = size;
    this->indice = 0;
    this->alumnos.resize(size);
    aprobados = 0;
    desaprobados = 0;
}
void Seccion::setNotasAlumno(double dc, double teo, double sp1, double sp2, double sp3, double sp4, double py1, double py2){

    this->alumnos[indice].setSP(sp1, sp2, sp3, sp4);
    this->alumnos[indice].setPY(py1, py2);
    this->alumnos[indice].setNotaDC(dc);
    this->alumnos[indice].setTeo(teo);
    this->indice++;

}
int Seccion::getAprobados(){
    int aprobados = 0;

    if (this->aprobados == 0){

        for (int i=0; i < this->size; i++) {
            cout << alumnos[i].getPromedio() << "\n";
            if (alumnos[i].getPromedio() > 10.5) {
                aprobados++;
            };
        }
    }
    else
        aprobados = this->aprobados;

        return aprobados;
}
int Seccion::getDesAprobados(){

    int desaprobados = 0;

    if (this->desaprobados == 0) {

        for (int i=0; i < this->size; i++) {
            if (alumnos[i].getPromedio() < 10.5) {
                desaprobados++;
            };
        }

    }
    else
        desaprobados = this->desaprobados;

    return desaprobados;

}

Seccion::~Seccion() {

}
