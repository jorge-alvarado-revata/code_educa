#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese edad: ";
    cin >> edad;
    if (edad >= 18) 
    {
        cout << "\nEs mayor de edad \nPuede votar!";
    }
    else 
    {
        cout << "\nEs menor de edad \nAun no puede votar!";
    }
}


