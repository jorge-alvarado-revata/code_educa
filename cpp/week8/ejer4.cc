#include <iostream>

using namespace std;

/*
const int *ptr declara una variable puntero que espera un valor constante. 
El valor a referenciar no puede cambiar desde este puntero.
*/

int main(){
    
    int x = 5;
    int y = 10;
    
    const int *ptr;
    
    ptr = &x;
    
    cout << "la direccion que apunta ptr: " << ptr << "\n";
    
    //*ptr = 10;
    
    ptr = &y;
    
    cout << "el nuevo valor de x: " << x << "\n";
    
    cout << "ptr apunta a una nueva variable: " << *ptr << "\n";
    
    cout << "la nueva direccion que apunta ptr: " << ptr << "\n";
    
    return 0;
}