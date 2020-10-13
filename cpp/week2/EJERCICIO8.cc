#include <iostream>
using namespace std;

int main() {
    //------------------------------//
	// DECLARACION DE VARIABLES
    char tipoTren;
    int edadUsuario;
    char tarifario;
    float monto;
    //------------------------------//	
	// ENTRADAS
	cout << "ingrese tipo de tren: ";
	cin >> tipoTren;
	cout << "ingrese edad del usuario:  ";
	cin >> edadUsuario;
	if ( (tipoTren =='H') || (tipoTren =='h') || (tipoTren =='E') || (tipoTren =='e'))
	    tarifario = '1';
	if ( (tipoTren =='V') || (tipoTren =='v') || (tipoTren =='A') || (tipoTren =='a'))
	    tarifario = '2';
	//------------------------------//	
	// PROCESO 
	switch(tarifario) {
	    case '1':
	             if (edadUsuario <= 17)
	                 monto = 800;
             	 if ((edadUsuario >= 18)&&(edadUsuario<=60))
                     monto = 990;
                 if (edadUsuario > 60)
                     monto = 700;
                 break;
        case '2':
	             if (edadUsuario <= 17)
	                 monto = 350;
             	 if ((edadUsuario >= 18)&&(edadUsuario<=60))
                     monto = 500;
                 if (edadUsuario > 60)
                     monto = 700;                 
                 break;
	}
	//------------------------------//	
	//SALIDA
	cout << "El precio a pagar es: " << monto;
}

