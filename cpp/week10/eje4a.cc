#include <iostream>

/*
Ahora usemos una clase Personas para almacenar la informacion
de personas y asociar las funciones con esta entidad.
*/

using namespace std;

class Persona {
    private:
        int edad;
        string profesion;
        string nombres;
    public:
        void print();
        Persona(int edad, string profesion, string nombres);
};

Persona::Persona(int edad, string profesion, string nombres){   
    this->edad = edad;
    this->profesion = profesion;
    this->nombres = nombres;
}

void Persona::print(){
    cout << "edad: " << this-> edad << "\n";
    cout << "profesion: " << this-> profesion << "\n";
    cout << "nombres: " << this-> nombres << "\n";
    
}


int main() {
    
    Persona jose(24, "tesorero", "Jose Daniel");
    
    jose.print(); 
    
    return 0;
}


