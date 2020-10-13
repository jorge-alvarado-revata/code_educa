#include <iostream>

/*
    const int * const ptr = &x;
    Declara un puntero constante que espera un valor constante.
    El valor referenciado no puede cambiar y el puntero no puede
    cambiar a otra referencia.
*/

using namespace std;

int main(){
    
    int x = 5;
    int y = 10;
    
    const int * const ptr = &x;
    
    
    cout << "la direccion que apunta ptr: " << ptr << "\n";
    cout << "el valor de x: " << x << "\n";
    //*ptr = 10;
    
    //ptr = &y;
    
    cout << "el nuevo valor de x: " << x << "\n";
    

    return 0;
}