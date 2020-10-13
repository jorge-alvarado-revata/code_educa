#include "Perros.h"

double edadEquivalente(int edad){
    double resultado = 0.0;
    if (edad == 1) resultado = 10.5;
    else if (edad == 2) resultado = 21.0;
    else if (edad > 2)
        resultado = 21.0 + (edad -2)*4.0;
    return resultado;
}