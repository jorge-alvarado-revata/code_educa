#include <iostream>
#include <new>

using namespace std;

int main() {
    
    float *n1;
    float *n2;
    
    n1 = new float;
    n2 = new float;
    
    if (n1 == nullptr || n2 == nullptr)
        return 1;
    else {
        cout << "Se obtuvo memoria en el heap:\n";
        cout << "ingrese numero1: ";
        cin >> *n1;
        cout << "\ningrese numero2:";
        cin >> *n2;
        cout << "la suma es:";
        
        delete n1;
        delete n2;
    }
    return 0;
}