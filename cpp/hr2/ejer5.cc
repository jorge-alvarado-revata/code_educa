#include <iostream>

using namespace std;

void histograma(int numero){
    
    for(int i=0; i< numero; i++){
        cout << "*";
    }
    cout << "\n";
}


int main() {
    
    int n = 0;
    
    cin >> n;
    int numeros[n];
    
    for(int i=0; i<n; i++){
        cin >> numeros[i];
    }
    
    for(int i=0; i<n; i++){
        histograma(numeros[i]);
    }
    
    return 0;
}