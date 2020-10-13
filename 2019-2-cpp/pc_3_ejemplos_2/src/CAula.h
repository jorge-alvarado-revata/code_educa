#ifndef CAULA_H
#define CAULA_H

#include "Tipos.h"
#include <iostream>
#include <vector>
#include "CAlumno.h"
class CAula {
    private:
        Cadena nombreAula;
        std::vector<CAlumno*> alumnos;
        Entero cantidadAlumnos;
    public:
        CAula(Cadena _nombreAula);
        ~CAula();
        void AsignarAlumnos(CAlumno *pCAlumno);
        Real PromedioAula();
};

#endif //CAULA_H