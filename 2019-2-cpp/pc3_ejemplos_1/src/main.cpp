 #include <iostream>
 #include "CLavadora.h"


int main() {

    std::cout << "Hello iniciando una Lavadora!" << std::endl;
    CLavadora lavadora(15, 220);
    lavadora.lavar();
}