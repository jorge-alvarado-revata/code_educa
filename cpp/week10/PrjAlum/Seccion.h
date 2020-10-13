//
// Created by Jorge Alvarado on 30/10/2017.
//

#ifndef PRJALUM_SECCION_H
#define PRJALUM_SECCION_H

#endif //PRJALUM_SECCION_H

#include <Vector>
#include <memory>
#include "Alumno.h"


using namespace std;

class Seccion {

private:
    vector<Alumno> alumnos;
    int indice;
    int size;
    int aprobados;
    int desaprobados;

public:
    Seccion(unsigned int size);
    void setNotasAlumno(double dc, double teo, double sp1, double sp2, double sp3, double sp4, double py1, double py2);
    int getAprobados();
    int getDesAprobados();

    virtual ~Seccion();

};
