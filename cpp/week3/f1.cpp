#include <iostream>
using namespace std;

long int Factorial(int n);


int main()
{ int n,t;
  long int suma;
    
 do{   
     cout << "Ingrese numero ";
     cin >> n;
 }while(n<1 || (n>14));     
 suma=0;
 t=1;
 while(t<=n)
 { suma = suma + Factorial(t);
   t++;
 }
 cout << "La suma de la serie es: " << suma;
 return(0);
} 

long int Factorial(int n)
//----------------------
{
  long int f;
 
 f=1;
 for(int t=1; t<=n; t++)
    f*=t;
 return(f);
}
