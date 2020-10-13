#ifndef CALUMNO_H
#define CALUMNO_H
#include "Tipos.h"
class CAlumno {
    private: 
        Cadena nombres;
        Cadena apellidos;
        Entero nota;
    public:
        CAlumno(Cadena _nombres, Cadena _apellidos);
        void setNota(Entero _nota);
        Entero getNota();
        ~CAlumno(){}
};

#endif //CALUMNO_H