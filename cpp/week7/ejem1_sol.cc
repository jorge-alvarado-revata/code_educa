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
    for(int j=0; j<8; i++)
      M[i][j] = rand() % 100;
  
  
    for(int i=0; i<8; i++)
      for(int j=0; j<8; i++)
        cout << M[i][j] << " ";
      cout << "\n";
     
  return(0);  
}
