#include "CAula.h"

CAula::CAula(Cadena _nombreAula){
    nombreAula = _nombreAula;
    alumnos = {};
    cantidadAlumnos = 0;
}
CAula::~CAula(){
    alumnos.clear();
}
void CAula::AsignarAlumnos(CAlumno *pCAlumno){

    alumnos.push_back(pCAlumno);
    cantidadAlumnos++;
}

Real CAula::PromedioAula(){
    Real Promedio = 0.0;
    for(int i=0; i<alumnos.size(); ++i)
        Promedio += alumnos[i]->getNota();
    return Promedio/alumnos.size();

}
