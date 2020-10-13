//
// Created by Jorge Alvarado on 12/11/2019.
//

#ifndef CLIONPROJECTSSUBTYPING_LAB_ABSTRACTASTRO_H
#define CLIONPROJECTSSUBTYPING_LAB_ABSTRACTASTRO_H
#include "tipos.h"

class AbstractAstro {
public:
    virtual ~AbstractAstro() = default;
    virtual entero identificador() = 0;
    virtual real size()=0;
    virtual void dibujar()=0;
};

#endif //CLIONPROJECTSSUBTYPING_LAB_ABSTRACTASTRO_H
