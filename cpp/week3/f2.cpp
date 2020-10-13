#include <iostream>
using namespace std;
    
long int NumInvertido(long int n)
//-------------------------------
//-- Se descompone el numero digito por digito y se va armando el numero invertido
{
	long int nInvertido, Digito;

	nInvertido = 0;
	while (n > 0)
	{
		Digito = n % 10;
		nInvertido = nInvertido * 10 + Digito;
		n = n / 10;
	}
	return(nInvertido);
}

int main()
{
	long int num;

	do {
		cout << "Ingrese un numero entero : ";
		cin >> num;
	} while (num < 0);
    cout << "El numero invertido es " << NumInvertido(num); 
    return(0);
}
