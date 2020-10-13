#include <iostream>
#include "funciones.h"
#include "Pompa.h"
int main() {
    std::cout << "Ingrese los valores enteros a intercambiar:" << std::endl;
    int x=0, y=0;
    std::cin >> x >> y;
    swap(x,y);
    std::cout << x << " : " << y;

    std::cout << "\nIngrese los valores reales a intercambiar:" << std::endl;
    float r1=0, r2=0;
    std::cin >> r1 >> r2;
    swap(r1,r2);
    std::cout << r1 << " : " << r2;

    Pompa p1(10);
    Pompa p2(15);
    p1 += p2;
    std::cout << p1.Diametro();


    return 0;
}