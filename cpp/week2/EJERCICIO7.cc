#include <iostream>
using namespace std;

int main() {
    //------------------------------//
	// DECLARACION DE VARIABLES
    int nota;
    //------------------------------//	
	// ENTRADAS
	cout << "ingrese nota: ";
	cin >> nota;
	// PROCESO y SALIDA
	if ((nota >= 18) && (nota<=20))
	    cout <<" Condicion: Excelencia";
	if ((nota >= 15) && (nota<=17))
	    cout <<" Condicion: Distinción";
	if ((nota >= 12) && (nota<=14))
	    cout <<" Condicion: Aprobado";
	if ((nota <= 11))
	    cout <<" Condicion: Desaprobado";
}	    
  
