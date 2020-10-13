//
// Created by Jorge Alvarado on 13/09/2018.
//

#include "sumatorias.h"

double Sumatoria::sin(double x) {

    double sumatoria = 0;
    int cont = 1;
    for (int i=1; i<=limite_N; i+=2){

        double producto = this->potencia(x,i)/this->factorial(i);
        if (cont%2==0)
            sumatoria -= producto;
        else
            sumatoria += producto;
        cont++;
    }
    return sumatoria;
}

int Sumatoria::factorial(double n) {
    int producto = 1;
    for (int i=1; i<=n; i++)
        producto *=i;
    return producto;
}

double Sumatoria::potencia(double base, int exponente) {

    for (int i=1; i<=exponente; i++)
        base *=base;
    return base;

}