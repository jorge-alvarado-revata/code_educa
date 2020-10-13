#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main(){
    int n=0;
    
    cin >> n;
    
    int numeros[n];
    int contador[n];
    
    for(int i=0; i<n; i++)
        cin >> numeros[i];

    int c;
    for(int i=0; i<n; i++){
        c = 0;
        for(int j=0; j<n; j++){
            if (numeros[i] == numeros[j]) 
                c += 1;
        }
        contador[i] = c;
    }
    
    int pos = 0;
    int mayor;
    mayor = contador[0];
    for(int i=1; i<n; i++){
        if (contador[i] >= mayor){
            mayor = contador[i];
            pos = i;
        }
    }
    
    cout << numeros[pos];
    
    return 0;
}