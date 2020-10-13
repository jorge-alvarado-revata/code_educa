//---Ejercicio 1 - Estructuras de control repetitivas.
//---Lee notas validando
//--Dato de Entrada: n (entre 5 y 25), nota (cada nota entre 0 y 20 inclusive)
//--Dato de Salida : promedio, numAprobados, numDesaprobados.

#include <iostream>
using namespace std;

int main()
{
  float nota = 0.0, promedio = 0.0;
  int n = 0;
  
  do{
      cout << "Numero de alumnos : ";
      cin >> n;
  }while( n<5 || n>24);
  
  int numAprobados=0, numDesaprobados=0;
  float suma = 0;
  int i = 1;
  for(i; i<=n; i++)
  {
    do{
        cout << "Nota: ";
        cin >> nota;
    }while( nota < 0 || nota > 20 );
    suma += nota;
    if(nota > 10.5)
       numAprobados++;
    else
       numDesaprobados++;
  }
  promedio = suma/n;
  cout <<"\n\n";
  cout << "Promedio del salon " << promedio << "\n";
  cout << "Aprobados          " << numAprobados << "\n";
  cout << "Desaprobados       " << numDesaprobados << "\n";
  return(0);
}