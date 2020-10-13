#include <iostream>

using namespace std;

int main() 
{
    int numero = 0;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    if (numero == 0)
        cout << "El numero es cero";
    else if (numero > 0)
        cout << "El numero es mayor a cero";
    else
        cout << "El numero es menor a cero";
    
    return 0;
}