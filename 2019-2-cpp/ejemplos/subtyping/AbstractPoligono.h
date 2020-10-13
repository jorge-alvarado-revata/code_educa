#ifndef POLIGONO_H
#define POLIGONO_H
#include "Tipos.h"

class AbstractPoligono {
  public:
    virtual ~AbstractPoligono() {};
    virtual Number calcularArea() = 0;
    virtual void dibujar() const = 0;
};

#endif