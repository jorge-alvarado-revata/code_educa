#include <iostream>

using namespace std;

// un puntero tiene un valor entero que representa la direccion en memoria
// de otra variable.

int main() {
    int x = -4;

    uintptr_t p = reinterpret_cast<uintptr_t> (&x);
    cout << "la direccion en hexadecimal: " << hex << p << endl;
    cout << "la direccion en decimal: " << dec << p << endl;

    cout << "la direccion de x: " << &x << endl;
    cout << "el valor de x: " << *(&x) << endl;


    
    return 0;
}