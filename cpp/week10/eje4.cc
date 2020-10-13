#include <iostream>

/*
Ahora usemos un array de Personas para almacenar un grupo determinado de 
personas.
*/

using namespace std;

struct Persona {
    int edad;
    string profesion;
    string nombres;
};

void printPersonas(Persona [], int);

using namespace std;

int main() {
    
    Persona personas[3];
    Persona elemPersona;
    
    elemPersona.edad = 24;
    elemPersona.profesion = "tesorero";
    elemPersona.nombres = "Daniel";
    
    personas[0] = elemPersona;
    
    elemPersona.edad = 26;
    elemPersona.profesion = "diseñadora";
    elemPersona.nombres = "Elena";
    
    personas[1] = elemPersona;
    
    elemPersona.edad = 36;
    elemPersona.profesion = "profesor";
    elemPersona.nombres = "Samuel";
    
    personas[2] = elemPersona;
    
    printPersonas(personas, 3);
    
    return 0;
}

void printPersonas(Persona arr[], int size){
    
    cout << "*********************************\n";
    for(int i=0; i< size; i++){
        cout << "Persona nro: "<< (i+1) << "\n";
        cout << "edad: " << arr[i].edad << "\n";
        cout << "profesion: " << arr[i].profesion << "\n";
        cout << "nombres: " << arr[i].nombres << "\n";
    }
    cout << "*********************************\n";
}

/*

Ahora tenemos una mejor forma de organizar la información de las personas.
Los datos estan organizados en entidades que se conocen como estructuras o struct.
Ademas podemos agrupar a las personas en un estructura de datos como un array.

Sin embargo existe una forma mejor de organizar la información y eso es con el
paradigma de programación orientada a objetos que lo veremos pronto.
Pero primero vamos a ver otro caso de representación de información.
*/