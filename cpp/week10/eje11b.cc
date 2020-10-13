#include <iostream>

using namespace std;

class Complejo {
private:
    float a;
    float b;
public:
    Complejo(float a, float b);
    void suma(float c, float d);
    void suma(Complejo b);
    void prodEscalar(int x);
    void prodComplejo(float a, float b);
    void print();
    float getReal();
    float getImaginaria();

};

Complejo::Complejo(float a, float b){
    this->a = a;
    this->b = b;
}

void Complejo::suma(float c, float d){
    
    this->a = this->a  + c;
    this->b = this->b  + d;
    
}

float Complejo::getReal(){
    return this->a;
}

float Complejo::getImaginaria(){
    return this->b;
}

void Complejo::suma(Complejo b){
    float c = b.getReal();
    float d = b.getImaginaria();
    this->a = this->a  + c;
    this->b = this->b  + d;
    
}

void Complejo::print(){
    cout << "(" << this->a << " , " << this->b << ")";
}



int main(){
    Complejo c(3.0, 2.0);
    c.print();
    c.suma(4.9, 3.5);

    cout << "\n";
    c.print();

    Complejo d(4.0, 5.5);
    c.suma(d);
    
    cout << "\n";
    c.print();
    
    return 0;
}