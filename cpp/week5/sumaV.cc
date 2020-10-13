#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>  //-- para usar el setw

using namespace std;

void GeneraVector(int V[], int n)
//---------------------------------------------------------------------
//--- El vector recibe el inicio del vector 
//---pero necesita saber cuantos elementos considerar por eso debemos
//---enviar el numero de elementos.
{
	for (int i = 0; i < n; ++i) 
	  V[i] = 10 + rand() % 90;
}

void SumaVectores(int V1[], int  V2[], int V3[], int n)
//------------------------------------------------------
//-- La funcion recibe a los vectores V1 y V2 con datos
//-- El Vector V3 esta vacio.
{
	for (int i = 0; i < n; i++)
	{
		V3[i] = V1[i] + V2[i];
	}
}


void 	ImprimirVector(int V[], int  n)
//-------------------------------------
{
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(3) << V[i];
	}
}


int main()
{
	int V1[20], V2[20], V3[20];
	
	srand(time(nullptr)); 
	GeneraVector(V1, 20);
	GeneraVector(V2, 20);
	SumaVectores(V1, V2, V3, 20);
	//--- Imprimimos los 3 vectores de manera horizontal
	ImprimirVector(V1, 20);
	ImprimirVector(V2, 20);
	ImprimirVector(V3, 20);
    return 0;
}
