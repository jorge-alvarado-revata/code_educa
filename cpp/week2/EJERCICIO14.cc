//---Ejercicio 2 - Estructuras de control repetitivas.
//---Lee notas validando
//--Dato de Entrada: nota (cada nota entre 0 y 20 inclusive)
//--Dato de Salida : prom, promSalon, numAprobados, numDesaprobados.

#include <iostream>
using namespace std;

int main()
{
  float nota = 0.0, prom = 0.0, promSalon = 0.0;
  int numAprobados = 0, numDesaprobados = 0;
  
  float sumTotal = 0.0;
  float sumUnAlumno = 0.0;

  for(int i=1; i<=7;i++)
  {
    cout << "Alumno numero " << i << "\n";
    sumUnAlumno=0.0;

    for(int n=1; n<=3; n++)
    {
      do{
          cout << "Nota: ";
          cin >> nota;
      }while( nota<0 || nota>20);
      
      sumUnAlumno+=nota;
    }
    
    prom = sumUnAlumno/3;
    
    cout << "El promedio del alumno es "  << prom << "\n\n";
    
    sumTotal += prom;
    
    if(prom>10.5)
       numAprobados++;
    else
       numDesaprobados++;
  }
  
  promSalon = sumTotal/7;
  
  cout <<"\n\n";
  cout << "Promedio del salon " << promSalon << "\n";
  cout << "Aprobados          " << numAprobados << "\n";
  cout << "Desaprobados       " << numDesaprobados << "\n";
  return(0);
}      