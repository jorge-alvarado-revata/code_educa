#include <iostream>
using namespace std;

int main()
{
  float dolares, soles, tasa_de_cambio;
  
  cout << "Dolares : ";
  cin >> dolares;
  cout << "Por un dolar cuantos soles te dan? : ";
  cin >> tasa_de_cambio;
  soles = dolares * tasa_de_cambio;
  cout << "tus dolares equivalen a " << soles << " soles!.";
} 
