#include <iostream>

using namespace std;

class Operacion{
    
private:
    int a;
    int b;
public:
    void setValores(int a, int b);
    int suma();
    int resta();
    int multiplicacion();
    int division();
    
};

void Operacion::setValores(int a, int b){
    this->a = a;
    this->b = b;
}

int Operacion::suma(){
    return this->a + this->b;
}


int main(){
    int a, b;
    cout << "ingrese numeros a y b: ";
    cin >> a >> b;
    Operacion op;
    op.setValores(a, b);
    cout << "la suma es: " << op.suma();
    return 0;
}