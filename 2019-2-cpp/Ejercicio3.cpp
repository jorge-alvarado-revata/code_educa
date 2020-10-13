//
// Created by Jorge Alvarado on 04/11/2019.
//
#include<iostream>
#include "tipos.h"
class Pompa {
private:
    real radio;
public:
    Pompa(){};
    Pompa(real pradio):radio{pradio}{}
    void setRadio(real pradio){radio = pradio;}
    real Diametro() const {return radio*2;}
    real Radio() const {return radio;}

    Pompa& operator+=(Pompa z){radio+=z.Radio(); return *this;}
};
int main(){
    Pompa p1(10);
    Pompa p2(15);
    p1 += p2;
    std::cout << p1.Diametro();
}