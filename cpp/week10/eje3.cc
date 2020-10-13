#include <iostream>
/*
usemos un elemento del lenguaje que nos permite agrupar distintos tipos de datos
en una estructura de datos para un solo concepto como es una persona.
*/
using namespace std;

struct Persona {
    int edad;
    string profesion;
    string nombres;
};


void printPersona(Persona p);

void changeNombres(Persona &p, string nombres);
void changeProfesion(Persona &p, string profesion);
void changeEdad(Persona &p, int edad);

int main(){
    
    Persona persona1;
    Persona persona2;
    
    persona1.edad = 22;
    persona1.profesion = "ninguna";
    persona1.nombres = "Juan Manuel";
    
    
    persona2.edad = 24;
    persona2.profesion = "doctor";
    persona2.nombres = "Sofia Valentina";
    
    printPersona(persona1);
    printPersona(persona2);
    changeNombres(persona1, "Juan Jose");
    printPersona(persona1);
    
    return 0;
}

void printPersona(Persona p) {
    
    cout << "**********************************\n";
    cout << "Persona.edad: " << p.edad << "\n";
    cout << "Persona.profesion: " << p.profesion << "\n";
    cout << "Persona.nombres: " << p.nombres << "\n";
}

void changeNombres(Persona &p, string nombres){
    p.nombres = nombres;
}
void changeProfesion(Persona &p, string profesion){
    p.profesion = profesion;
}
void changeEdad(Persona &p, int edad){
// ToDO    
}