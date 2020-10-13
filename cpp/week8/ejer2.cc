#include <iostream>

using namespace std;

int main() {
    
    int x = 30;
    
    int *ptr;
    
    ptr = &x;
    
    *ptr = 35;
    
    cout << "el valor de x es: " << x << "\n"; 
    cout << "la direccion de x es: "<< ptr << "\n";
    cout << "el tamaño del puntero ptr es: " << sizeof(ptr);
    
    return 0;
}