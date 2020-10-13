#include <iostream>
#include "tipos.h"
int main() {
    // Ejemplos de casting
    real b = 6;
    entero a = 9.99; // conversión implicita se pierde precision

    long int velocidad = 65.5;

    entero x = (entero) 3.1415;

    std::cout << "Hello, World!" << velocidad << std::endl;
    return 0;
}