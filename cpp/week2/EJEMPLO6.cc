#include <iostream>
using namespace std;

int main()
{
  int dia, mes, annio, dt;
  
  cout << "Dia de Nacimiento : ";
  cin >> dia;
  cout << "Mes de Nacimiento : ";
  cin >> mes;
  cout  << "Anio en curso : ";
  cin >> annio;
  
  dt=0;
  
  switch(mes-1)
  {
      case 11: dt+=30;
      case 10: dt +=31;
      case 9:  dt+=30;
      case 8:  dt+=31;
      case 7:  dt+=31;
      case 6:  dt+=30;
      case 5:  dt+=31;
      case 4:  dt+=30;
      case 3:  dt+=31;
      case 2:  
              if(annio%4==0)
                dt+=29;
              else
                dt+=28;
      case 1:  dt+=31;
  }
  dt = dt + dia-1;  //-- el dia actual no ha terminado, no ha transcurrido.
  cout << "\n\n";
  cout << "deben transcurrir " << dt ;
  cout << " dias desde el 1 de enero para que llegue tu cumpleanios";
}


