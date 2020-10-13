#include <iostream>

/*
    int * const ptr = &x;
    Declara un puntero constante a una variable entera.
    El valor referenciado puede cambiar pero el puntero no puede
    cambiar a otra referencia.
*/

using namespace std;

int main(){
    
    int x = 5;
    int y = 10;
    
    int * const ptr = &x;
    
    
    cout << "la direccion que apunta ptr: " << ptr << "\n";
    cout << "el valor de x: " << x << "\n";
    *ptr = 10;
    
    ptr = &y;
    
    cout << "el nuevo valor de x: " << x << "\n";

    
    return 0;
}