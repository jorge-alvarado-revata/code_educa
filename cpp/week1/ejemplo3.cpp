#include <iostream>

using namespace std;

int main()
{
    float numero = 0;

    cout << "ingrese un float: ";

    cin >> numero;

    int entera = int(numero);

    float fraccion = numero - entera;

    cout << "parte entera: " << entera << endl;

    cout << "parte fraccionaria: " << fraccion << endl;
}
