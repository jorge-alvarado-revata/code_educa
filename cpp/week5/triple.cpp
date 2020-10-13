#include <iostream>
#include <cmath>
using namespace std;

void numeros(int numero, int &triple, double &raiz, bool &esMultiplo){
    triple = numero*3;
    raiz = sqrt(numero);
    if (numero % 3 == 0)
        esMultiplo = true;
}

int main(){
    int n=0;
    int triple=0;
    double raiz=0.0;
    bool esM = false;
    
    cout << "ingrese N: ";
    cin >> n;
    numeros(n, triple, raiz, esM);
    cout << "los valores son: " << triple << " : " << raiz << ": "<< esM;
    
    return 0;
}