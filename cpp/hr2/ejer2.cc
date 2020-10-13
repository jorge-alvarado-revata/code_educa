#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main(){
    int n = 0;
    
    cin >> n;
    
    int i = 1;
    float suma = 0;
    
    while (i <= n){
        suma += 1.0/sqrt(i);
        i += 1;
    }

    cout << suma;
    return 0;
}