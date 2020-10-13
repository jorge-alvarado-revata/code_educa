//
// Created by Jorge Alvarado on 07/11/2019.
//

#ifndef OVERLOADING_POMPA_H
#define OVERLOADING_POMPA_H
#include "tipos.h"

class Pompa {
private:
    real radio;
public:
    Pompa():radio{0.0}{};
    Pompa(real pradio):radio{pradio}{}
    void setRadio(real pradio){radio = pradio;}
    real Diametro() const {return radio*2;}
    real Radio() const {return radio;}

    Pompa& operator+=(Pompa z);
};


#endif //OVERLOADING_POMPA_H
