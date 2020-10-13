#include <iostream>
#include <cmath>   //--- funciones matematicas
using namespace std;

int main()
{
   float x1,y1,x2,y2, pmx, pmy;
   double Distancia;
   
   cout << "Ingrese punto 1 " << endl;
   cout << "x1: ";
   cin >> x1;
   cout << "y1: ";
   cin >> y1;
   cout << endl;
   cout << "Ingrese punto 2 " << endl;
   cout << "x2: ";
   cin >> x2;
   cout << "y2: ";
   cin >> y2;
   
   Distancia =  sqrt(pow(x2-x1,2) + pow(y2-y1,2));
   pmx = (x1+x2)/2;
   pmy = (y1+y2)/2;
   
   cout << "La distancia es : " << Distancia << endl;
   cout << "El punto medio es " << "(" << pmx << "," << pmy << ")";
}
   
