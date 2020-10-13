#include <iostream>
using namespace std;

int main()
{
    int cantidad;
    int descuento;
    cout << "Ingrese cantidad: ";
    cin >> cantidad;
    if (cantidad >= 101) 
        descuento = 40;
    else
    {
        if (cantidad >= 26)
            descuento = 20;
        else
        {
            if (cantidad >= 10)
                descuento = 10;
        }
    }
    cout << "Le corresponde un descuento de: " << descuento << "%";
}

