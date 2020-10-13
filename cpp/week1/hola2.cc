#include <iostream>
using namespace std;

int main()
{
    int estacion;
    cout << "Ingrese numero de estacion (del 1 al 4): ";
    cin >> estacion;
    switch (estacion)
    {
      case 1: cout << "Primavera";
              break;
      case 2: cout << "Verano";
              break;
      case 3: cout << "Otonio";
              break;
      case 4: cout << "Invierno";
              break;
      default: 
              cout << "Ingrese solo numeros del 1 al 4";
    }
}
