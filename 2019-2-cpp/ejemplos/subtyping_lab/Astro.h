//
// Created by Jorge Alvarado on 12/11/2019.
//

#ifndef CLIONPROJECTSSUBTYPING_LAB_ASTRO_H
#define CLIONPROJECTSSUBTYPING_LAB_ASTRO_H
#include "AbstractAstro.h"
#include "tipos.h"

class Astro:public AbstractAstro {
public:
    Astro(){}
    entero identificador() override ;
    real size() override ;
    void dibujar() override ;
};


#endif //CLIONPROJECTSSUBTYPING_LAB_ASTRO_H
