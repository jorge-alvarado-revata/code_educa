#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    
    int n = 0;
    
    cin >> n;
    
    int numeros[n];
    
    for(int i=0; i<n; i++){
        cin >> numeros[i];
    }
    
    for(int i=n-1; i>=0; i--){
        cout<< setprecision(3) << sqrt(numeros[i]) << "\n";
    }
    
    
    return 0;
}