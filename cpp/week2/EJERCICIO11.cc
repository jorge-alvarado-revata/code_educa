------------
//---Ejemplo 1 - Estructuras de control repetitivas.
//--- Imprime el abecedario hasta la letra que ingresa el usuario

#include <iostream>
using namespace std;

int main()
{
 char letra;
 
 do
 {
   cout << "Letra <A-Z>: ";
   cin >> letra;
   letra = toupper(letra);
 }while( letra < 'A' || letra > 'Z');
 
 char c;
 for( c = 'A'; c <= letra; c++)
   cout << c << " ";
  return(0);
} 