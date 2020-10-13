#ifndef CLAVADORA_H
#define CLAVADORA_H
#include "Tipos.h"
#include "CMotor.h"
#include "CTambor.h"

class CLavadora {
    private:
        Cadena modelo;
        CMotor *motor;
        CTambor *tambor;

    public:
        CLavadora(Entero _tamanioTambor, Entero _voltajeMotor);
        ~CLavadora();
        void lavar();
};

#endif // CLAVADORA_H