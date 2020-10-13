//
// Created by Jorge Alvarado on 07/11/2019.
//

#include "funciones.h"

int swap(entero& a, entero& b){
  entero temp = a;
  a = b;
  b = temp;
}
float swap(real&a, real&b){
    real temp = a;
    a = b;
    b = temp;
}