#include <iostream>

using namespace std;

int cuadrado(int valor){
    return valor * valor;
}

void cuadradoByPtr(int *numPtr){
    *numPtr = (*numPtr)*(*numPtr);
}

int main() {

    int x = 5;
    int y;
    
    y = cuadrado(x);
    
    cuadradoByPtr(&x);
    
    cout << "el cuadrado de x es: " << x << "\n";
    cout << "el cuadrado de x es: " << y;
    return 0;
}