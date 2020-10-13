//
// Created by Jorge Alvarado on 11/11/2019.
//
#include "AbstractPoligono.h"
#ifndef SUBTYPING_POLIGONO_H
#define SUBTYPING_POLIGONO_H


class Poligono: public AbstractPoligono {

public:
    Poligono(){};
    Number calcularArea() override;
    void dibujar() const override;
};

#endif //SUBTYPING_POLIGONO_H
