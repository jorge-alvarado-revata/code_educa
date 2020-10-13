#include <iostream>

using namespace std;

int main()
{
    int myArray[10] = {2, 4, 6, 8, 10, 32, 54, 66, 2, 1}; 
    
    int suma = 0;
    int menor = 0, mayor = 0;
    
    menor = myArray[0];
    mayor = myArray[0];
    
    for (int i=0; i<10; i++){
        
        suma += myArray[i];
        
        if (myArray[i] < menor)
            menor = myArray[i];
            
        if (myArray[i] > mayor)
            mayor = myArray[i];
    }
    
    cout << "la suma es: " << suma << "\n";
    cout << "el menor es: " << menor << "\n";
    cout << "el mayor es: " << mayor << "\n";
    
    return 0;
}