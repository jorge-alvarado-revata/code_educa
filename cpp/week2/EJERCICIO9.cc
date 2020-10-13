#include <iostream>
using namespace std;

int main() {
    //------------------------------//
	// DECLARACION DE VARIABLES
    int dia,anio,mes;
    char trimestre;
    string angel;
    //------------------------------//	
	// ENTRADAS
	cout << "Ingrese fecha de nacimiento:\n ";
	cout << "Día: ";
	cin >> dia;
	cout << "Mes: ";
	cin >> mes;
	cout << "Anio: ";
	cin >> anio;
	
    //------------------------------//	
    // PROCESO
    if ((mes==1) || (mes==2) || (mes==3))
        trimestre = '1';
    if ((mes==4) || (mes==5) || (mes==6))
        trimestre = '2';
    if ((mes==7) || (mes==8) || (mes==9))
        trimestre = '3';
    if ((mes==10) || (mes==11) || (mes==12))
        trimestre = '4';        
        
    //Caso: Anio Par y Dia Par    
    if ((anio %2 ==0) && (dia%2==0)){
        switch(trimestre) {
	    case '1':
                 angel = "Miguel";
                 break;
	    case '2':
                 angel = "Jofiel";
                 break;
	    case '3':
                 angel = "Chamuel";
                 break;
	    case '4':
                 angel = "Ariel";
                 break;                 
    	}
    }
    
    //Caso: Anio Par y Dia Impar   	
	    if ((anio %2 ==0) && (dia%2!=0)){
        switch(trimestre) {
	    case '1':
                 angel = "Gabriel";
                 break;
	    case '2':
                 angel = "Raziel";
                 break;
	    case '3':
                 angel = "Selatiel";
                 break;
	    case '4':
                 angel = "Jeremiel";
                 break;                 
    	}
    }
	
   //Caso: Anio Impar y Dia Par   	
	    if ((anio %2 !=0) && (dia%2==0)){
        switch(trimestre) {
	    case '1':
                 angel = "Rafael";
                 break;
	    case '2':
                 angel = "Barachiel";
                 break;
	    case '3':
                 angel = "Zadquiel";
                 break;
	    case '4':
                 angel = "Anael";
                 break;                 
    	}
    }

   //Caso: Anio Impar y Dia Impar   	
	    if ((anio %2 !=0) && (dia%2!=0)){
        switch(trimestre) {
	    case '1':
                 angel = "Uriel";
                 break;
	    case '2':
                 angel = "Jehudiel";
                 break;
	    case '3':
                 angel = "Metatron";
                 break;
	    case '4':
                 angel = "Azrael";
                 break;                 
    	}
    }	

	//------------------------------//	
	//SALIDA
	cout<<"Tu angel es: " <<angel;
}

