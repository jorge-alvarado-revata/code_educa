#include <iostream>

using namespace std;

// un puntero tiene un valor entero que representa la direccion en memoria
// de otra variable.
// ptr tiene la direccion de x.


int main() {
    float x = -4.0033;
    float *ptr = &x;
    
    cout << "la direccion de x: " << ptr << endl;
    cout << "el valor de x: " << *ptr << endl;


    return 0;
}