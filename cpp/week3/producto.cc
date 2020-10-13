#include<iostream>

//Producto

using namespace std;

int main() {
    
    int N = 0, producto = 1, valor = 0;
    cout << "ingrese N: ";
    cin >> N;
    
    for (int i=0; i<N; i++){
        
        cout << "ingrese valor: ";
        cin >> valor;
        
        producto = producto * valor;
    }
    
    cout << "el producto es: " << producto;
    return 0;
}