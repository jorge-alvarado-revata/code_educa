#include <iostream>

using namespace std;

class CPerro{
    
    private:
        float talla;
        int edad;
        string nombre;
        string duenio;
        string fechaNac;
        
    public:
        void setTalla(float talla);
        void setNombre(string nombre);
        void setDuenio(string duenio);
        void setFechaNac(string fechaNac);
        void getDatos();
};



void CPerro::setTalla(float talla){
    this->talla = talla;
}

void CPerro::setNombre(string nombre){
    this->nombre = nombre;
}

void CPerro::getDatos(){
    
    cout << "nombre: " << this-> nombre << "\n";
    cout << "talla: " << this-> talla << "\n";
}

int main() {
    
    CPerro *p1 = new CPerro();
    CPerro *p2 = new CPerro();
    
    p1->setNombre("Fido");
    p2->setNombre("Bulk");
    
    p1->getDatos();
    p2->getDatos();
    
    
    return 0;
    
}