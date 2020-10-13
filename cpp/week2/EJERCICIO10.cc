#include <iostream>
using namespace std;

int main() {
    //------------------------------//
	// DECLARACION DE VARIABLES
    int anio;
    char marca, tipoPago, categoria;
    float impuestoVehicular, valorReferencial;
    valorReferencial, impuestoVehicular= 0;
    //------------------------------//	
	// ENTRADAS
	cout << "Marca (H:Hyundai; N:Nissan; T:Toyota): ";
	cin >> marca;
	cout << "Categoría: ";
	cin >> categoria;
	cout << "Año de fabricación: ";
	cin >> anio;
	cout << "Como realiza el pago Efectivo (E) ó Tarjeta (T): ";
	cin >> tipoPago;
	
    //------------------------------//	
    // PROCESO
    // CASO: Marca Hyundai Y Categoria 3)
    if ((marca=='H') && (categoria=='3')) {
        if (anio < 2005)
           valorReferencial = 15000 ;
        else
           valorReferencial = 25090 ;
    }
    
    // CASO: Marca Hyundai Y Categoria 4)
    if ((marca=='H') && (categoria=='4')) {
        if (anio < 2003)
           valorReferencial = 35620 ;
        else
           valorReferencial = 42750 ;
    }
    // CASO: Marca Nissan Y Categoria 3)
    if ((marca=='N') && (categoria=='3')) {
        if (anio < 2004)
           valorReferencial = 9950 ;
        else
           valorReferencial = 14630 ;
    }
        
     // CASO: Marca Nissan Y Categoria 4)
    if ((marca=='N') && (categoria=='4')) {
        if (anio < 2005)
           valorReferencial = 17900 ;
        else
           valorReferencial = 23840 ;
    }
        
      // CASO: Marca Toyota Y Categoria 3)
    if ((marca=='T') && (categoria=='3')) {
        if (anio < 2002)
           valorReferencial = 6880 ;
        else
           valorReferencial = 10590 ;
    }
    
    // CASO: Marca Toyota Y Categoria 4)
    if ((marca=='T') && (categoria=='4')) {
        if (anio < 2004)
           valorReferencial = 14590 ;
        else
           valorReferencial = 21650 ;
    }
    
    if (tipoPago == 'T')
            // se aplica recarga de 10 % a pago con Tarjeta de Crédito
           impuestoVehicular = (valorReferencial * 0.01) *1.10  ;      
    else   
       // si el pago es en efectivo, sólo se cobra el 1%            
        impuestoVehicular = valorReferencial * 0.01 ;      
	//------------------------------//	
	//SALIDA
	cout << "\n\nImpuesto Vehicular: " << impuestoVehicular;
}

