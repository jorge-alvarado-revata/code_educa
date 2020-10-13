#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Poligono.h"

class Paralelograma: public Poligono {
    Number base;
    Number altura;
  public:
    Paralelograma(Number base, Number altura);
    Number calcularArea() override;
    void dibujar() const override;
};

#endif