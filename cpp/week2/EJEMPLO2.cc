#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese numero: ";
    cin >> numero;
    if (numero ==0) 
        cout << "\nEl numero es cero";
    else
    {
        if (numero > 0) 
        {
            cout << "\nEl numero es positivo";
        }
        else
        {
            cout << "\nEl numero es negativo";
        }
    }
}

