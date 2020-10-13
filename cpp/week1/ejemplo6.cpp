#include <iostream>
#include <iomanip> //--- para usar setw

using namespace std;

int main()
{
  int g1,m1,s1;
  int g2,m2,s2;
  int g3,m3,s3;
  int Llevo;
  
  cout << "Ingrese valores para el angulo 1 " <<endl;
  cout << "G1 : ";
  cin  >> g1;
  cout << "M1 : ";
  cin  >> m1;
  cout << "S1 : ";
  cin  >> s1;
  cout << endl << endl;
  cout << "Ingrese valores para el angulo 2 " <<endl;
  cout << "G2 : ";
  cin  >> g2;
  cout << "M2 : ";
  cin  >> m2;
  cout << "S2 : ";
  cin  >> s2;
  
  s3 = (s1+s2)%60;
  Llevo = (s1+s2)/60;
  m3  = (m1+m2+Llevo)%60;
  Llevo = (m1+m2+Llevo)/60;
  g3 = g1 + g2 + Llevo;
  
  cout << endl; 
  cout << setw(6) << g1 << setw(6) << m1 << setw(6) << s1 << endl;
  cout << setw(6) << g2 << setw(6) << m2 << setw(6) << s2 << endl;
  cout << "--------------------------"  << endl;
  cout << setw(6) << g3 << setw(6) << m3 << setw(6) << s3 << endl;
}
