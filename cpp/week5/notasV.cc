//leer notas
#include <iostream>
using namespace std;

int main () 
{
  float notas[10];
  float menorNota, promedio, suma;
  
  //--- Se leen dato al vector
  for(int i=0; i<=9; i++)
  {
      cout << "Notas[" << i << "]= ";
      cin >> notas[i];
  }
  
  //-- Se halla el promedio
  suma=0;
  for(int i=0; i<=9; i++)
    suma += notas[i];
  promedio = suma/10;
  cout << "El promedio es : " << promedio << "\n";
  
  //-- Se imprimen las notas mayores al promedio
  cout << "Notas mayores al promedio \n";
  for(int i=0; i<=9; i++)
    if(notas[i] > promedio)
       cout << notas[i] << "\n";
       
 //-- se imprimen las notas en orden inverso al que fueron ingresadas       
  for(int i=9; i>=0; i--)
    cout << "notas[" << i << "]=" << notas[i] << "\n";
  cout << "\n\n";       
       
  //-- se halla la menor nota
  menorNota = notas[0];
  for(int i=1; i<=9; i++)
      if(notas[i]<menorNota)
         menorNota = notas[i];
  cout << "La menor nota es " << menorNota << "\n";
  cout << "El promedio sin considerar la menor nota es : " << (suma-menorNota)/9;
  return(0);
}  
      
