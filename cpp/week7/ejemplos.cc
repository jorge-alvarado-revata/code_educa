#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int n=0;
    cin >> n; 
    cout << "raiz cuadrada: ";
    cout << sqrt(n) << "\n";
    cout << "potencia: ";
    cout << pow(n, 2) << "\n";
    cout << "raiz con precision a 3 decimales: ";
    cout << setprecision(4) << sqrt(n) << "\n";
    return 0;
}