#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip> 

using namespace std;

int main()
{ 
  int M[8][8];

  srand(time(nullptr)); 
  //-- se genera la matriz con numeros aleatorios
  for(int i=0; i<8; i++)
    for(int j=0; j<8; j++)
      M[i][j] = rand() % 100;
  
    int acumulador = 0;
    for(int i=0; i<8; i++){
      for(int j=0; j<8; j++){
        if (i > j)  {
            acumulador += M[i][j];
            cout << setw(5) << M[i][j];
        }
        else
            cout << setw(5) << "0"; 
      }
      cout << "\n";
    }
    cout << "La suma es: " << acumulador;
     
  return(0);  
}
