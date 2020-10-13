#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void GeneraVector(int V[], int n)
//---------------------------------------------------------------------
{
	for (int i = 0; i < n; i++) 
	{
		do
		{
		   V[i] = rand() % 100;	
		}while( V[i]<10 || V[i]>99);
	}
}


void 	ImprimirVector(int V[], int  n)
//-------------------------------------
{
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << "V["<< i << "]=" << V[i] << "\n";
	}
}

int HallaPosicion(int V[], int n, int Dato)
//------------------------------------------
//-- Devuelve -1 si el dato no esta en el vector
//-- Devuelve la posicion del dato.
{ int i;

  i=0;
  while((i<n)  && Dato!=V[i])
   i++;
  if( i==n)
    return(-1);
  else 
    return(i);
}


int main()
{
	int V[20];
	int Dato, Pos;
	
	srand(time(nullptr)); 
	GeneraVector(V, 20);
	ImprimirVector(V, 20);
    cout << "Ingrese dato a buscar : ";
    cin >> Dato;
    Pos = HallaPosicion(V,20,Dato);
    if(Pos == -1)
      cout << "El dato que buscas no esta en el vector";
    else
      cout << "El dato que buscas esta en la posicion " << Pos;
    return 0;
}


