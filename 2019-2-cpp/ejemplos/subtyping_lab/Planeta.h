//
// Created by Jorge Alvarado on 12/11/2019.
//

#ifndef CLIONPROJECTSSUBTYPING_LAB_PLANETA_H
#define CLIONPROJECTSSUBTYPING_LAB_PLANETA_H

#include "tipos.h"
#include "Astro.h"

class Planeta: public Astro {
public:
    Planeta(){}
    entero identificador() override ;
    real size() override ;
    void dibujar() override ;
};
#endif //CLIONPROJECTSSUBTYPING_LAB_PLANETA_H
