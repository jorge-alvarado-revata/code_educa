#include <iostream>

// compila en c9.io un entorno controlado pero localmente dará un error de memoria.
// la direccion de respuesta de myFunction se pierde al terminar la llamada a la funcion.

using namespace std;

int *myFunction() {
    
    int fantasma = 100;
    return &fantasma;
}

int main(){

    int *ptr;
    
    ptr = myFunction();
    
    
    cout << "El valor de fantasma debe ser 100: " << *ptr;
    
    return 0;
}