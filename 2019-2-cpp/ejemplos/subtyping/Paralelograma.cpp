#include "Paralelograma.h"
#include <iostream>

Paralelograma::Paralelograma(Number base, Number altura) {
  this->base = base;
  this->altura = altura;
}

Number Paralelograma::calcularArea() {
  return base * altura;
}

void Paralelograma::dibujar() const{
  std::cout << "dibujar paralelograma\n";
}