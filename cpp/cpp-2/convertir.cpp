// Example program
#include <iostream>
#include <cmath>
using namespace std;

int leerbase();
int leernumero(int base);
int convertir(int numero, int base);

int main()
{
    int base = leerbase();
    int numero = leernumero(base);
    int respuesta = convertir(numero, base);
    cout << respuesta;
    return 0;
    
}

int leerbase(){
    int base;
    cout << "ingrese la base:";
    cin >> base;
    return base;    
}

int leernumero(int base) {
    int numero;
    cout << "ingrese el numero en la base " << base << ":";
    cin >> numero;
    return numero;
}
int convertir(int numero, int base) {
    int suma=0;
    int i =0;
    while (numero>0){        
        int digito = numero%10;
        suma = suma + digito*pow(base,i);
        i++;
        numero /= 10;
    }
    return  suma;

}
