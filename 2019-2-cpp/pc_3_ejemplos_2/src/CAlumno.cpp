#include "CAlumno.h"
#include "Tipos.h"

CAlumno::CAlumno(Cadena _nombres, Cadena _apellidos){
    nombres = _nombres;
    apellidos = _apellidos;
    nota = 0;
}

void CAlumno::setNota(Entero _nota){
    nota = _nota;
}
Entero CAlumno::getNota(){
    return nota;
}