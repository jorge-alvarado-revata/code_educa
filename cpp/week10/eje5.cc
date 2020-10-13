/*
¿Como nos referimos a los datos de un concepto en el mundo matemático?.
Representaremos un vector geometrico.
Segmento orientado en el plano. Tiene un punto de
origen y un punto final.
*/

#include <iostream>

using namespace std;

//creamos una funcion para imprimir un vector nuevo.
// esto es un prototipo de función, o la declaracion, la implementación
// esta al final.
void printVector(double, double, double, double);

//creamos un funcion para mover el vector una posicion.
void desplazaVector(double &, double &, double &, double &, double, double);

int main(){
    
    //Un vector
    //punto origen
    double xInicio, yInicio;
    //punto destino
    double xFin, yFin;
    
    //asignando valores
    xInicio = 1.1;
    yInicio = 2.1;
    xFin = 2.3;
    yFin = 3.2;
    printVector(xInicio, yInicio, xFin, yFin);
    desplazaVector(xInicio, yInicio, xFin, yFin, 3.0, 2.0);
    printVector(xInicio, yInicio, xFin, yFin);

    return 0;
    
    
}

void printVector(double x0, double y0, double x1, double  y1){
    cout << "(" << x0 << ", " << y0 << ") -> (" << x1 << ", " << y1 << ")" << "\n";
}

// observer los pasos por referencia de los valores
void desplazaVector(double &x0, double &y0, double &x1, double &y1, double x, double y){
    x0 += x;
    y0 += y;
    x1 += x;
    y1 += y;
}

/*
El ejemplo funciona, pero si observamos bien los datos del vector
estan repartidos en distintas variables asi como las funciones que
quieren modificar también deben recibir distintas variables.
*/