/*
Como nos referimos a un la informacion de una persona en el Censo
*/

#include <iostream>

using namespace std;

void printPersona(string, string, int, int, string, bool);

void cambiarEdadPersona(int &, int);

void cambiarJefeFamilia(bool &, bool);

int main(){

    // Persona 1
    string nombre1 = "Juan Alfonso";
    string apellido1 = "Melendez Aranibar";
    int edad = 20;
    int dni = 222220;
    string profesion = "Ninguna";
    bool jefe_familia = false;
    
    
    // Persona 2
    
    string nombre2 = "Gabriela Rosaria";
    string apellido2 = "Calipzo Rajoy";
    int edad2 = 25;
    int dni2 = 3342220;
    string profesion2 = "Doctor";
    bool jefe_familia2 = true;
    
    cambiarEdadPersona(edad, 32);
    cambiarEdadPersona(edad2, 20);
    cambiarJefeFamilia(jefe_familia, true);
    
    printPersona(nombre1, apellido1, edad, dni, profesion, jefe_familia);
    printPersona(nombre2, apellido2, edad2, dni2, profesion2, jefe_familia2);
    
    return 0;

}


void printPersona(string n, string a , int e, int d, string r, bool j){
    cout << "************************************************\n";
    cout << "nombre: " << n << "\napellidos: " << a << "\nedad: " 
    << e << "\ndni: " << d << "\nprofesion: " << r << "\njefe de familia: "
    << j << "\n";
    cout << "************************************************\n";
}

void cambiarEdadPersona(int &edad, int valor){
    edad = valor;
}

void cambiarJefeFamilia(bool &jefe_familia, bool valor){
    jefe_familia = valor;
}

/*¿Ahora que pasaría si queremos agregar una tercera persona?*/