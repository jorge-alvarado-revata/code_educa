//---Ejemplo 2 - Estructuras de control repetitivas.
//---Lee numeros, termina al leer el cero

#include <iostream>
using namespace std;

int main()
{
  int n, numero, npar, nimpar;
  
  n=0;
  do
  {
   cout << "Numero < 0 termina > : ";
   cin >> numero;
   if( numero != 0)
   {
    n++;
    if(numero%2 == 0)
      npar++;
    else
      nimpar++;
   }
  }while(numero!=0);

  cout << "Numeros leidos "  << n <<"\n";
  cout << "Numero pares   "  << npar << "\n";
  cout << "Numero impares "  << nimpar << "\n";
 
  return(0);
}