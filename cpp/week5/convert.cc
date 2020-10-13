#include <iostream>
using namespace std;

void ConvertiraDiferentesMonedas( float dinero, float &aDolares, float &aEuros,
                                  float  &aLibraEsterlinas)
{
   aDolares = dinero/3.235;
   aEuros   = dinero / 3.88;
   aLibraEsterlinas = dinero * 0.23517;
}                                  
                                 

int main()
{ float dinero;
  float aDolares, aEuros, aLibraEsterlinas;

   cout << "Ingrese monto a convertir : ";
   cin >> dinero;
   
   ConvertiraDiferentesMonedas(dinero, aDolares, aEuros, aLibraEsterlinas);
   cout << dinero << " de soles equivale a : \n";
   cout << aDolares << " Dolares\n";
   cout << aEuros << " Euros \n";
   cout << aLibraEsterlinas << " Libras esterlinas";
   return(0);
}  
