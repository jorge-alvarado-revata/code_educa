#include <iostream>

using namespace std;

int main() {
    
    int numeros[] = {10,22,34,2,11,33};
    
    int size = 6;
    
    for(int i=0; i<size; i++) {
        
        cout << "numeros[" << i << "]=" << numeros[i] << "\n";
    }
}