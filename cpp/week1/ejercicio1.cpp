#include <iostream>
using namespace std;

const double  pi=3.1415;

int main()
{
  double ang_en_radianes;
  double ang_en_grados;
  
  cout << "Angulo en radianes : ";
  cin >> ang_en_radianes;
  ang_en_grados = ang_en_radianes*180/pi;
  cout << "El angulo equivale a " << ang_en_grados << "  grados sexagesimales"<<endl;
}
