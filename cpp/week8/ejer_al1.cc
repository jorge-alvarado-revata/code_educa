/*
 Cree una funcion usando punteros que convierta un valor x 
 a la potencia y.
*/

#include <iostream>

using namespace std;

void potencia(int *ptr, int n){
    int base=1;
    for (int i=0;i<n;i++){
        base=base*(*ptr);
    }
    *ptr=base;
}

int main() {
    int x;
    int pot;
    
    cout << "ingrese x:";
    cin >> x;
    cout << "\ningrese exponente: ";
    cin >> pot;
    potencia(&x, pot);
    cout << "\npotencia: " << x;
    return 0;
}