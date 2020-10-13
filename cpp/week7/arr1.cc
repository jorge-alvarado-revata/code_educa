#include <iostream>

using namespace std;

int main(){
    int n=0;
    cin >> n;
    int notasSalon1[n];
    int notasSalon2[n];
    float promedio[n];
    int indice = 0;
    while (indice < n) {
        cout << "nota salon1: ";
        cin >> notasSalon1[indice]; 
        cout << "nota salon2: ";
        cin >> notasSalon2[indice]; 
        indice++;
    }
    int suma = 0;
    for(int i=0; i< n; i++){
        promedio[i] = (notasSalon1[i] + notasSalon2[i])/2;
        cout << promedio[i];
    }
    
    float promedio = suma / n;
    cout << promedio;
        //cout << "nota (" << i << ") :" << notas[i];
    return 0;
    
}