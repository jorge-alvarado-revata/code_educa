#include<iostream>

using namespace std;

int main() {
    
    int N = 0;
    cout << "ingrese N: ";
    cin >> N;
    int potencia = 1;
    
    while(potencia <= N/2) {
        potencia = potencia * 2;
    }
    
    cout <<"La potencia es: " << potencia;
    return 0;
}