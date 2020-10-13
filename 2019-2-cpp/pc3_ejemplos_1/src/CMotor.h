#ifndef CMOTOR_H
#define CMOTOR_H

#include "Tipos.h"
class CMotor {
    private:
        Entero voltaje;
    public:
        CMotor(){ voltaje = 0;}
        CMotor(Entero _voltaje){voltaje=_voltaje;}
        void Validar();
};

#endif //CMOTOR_H