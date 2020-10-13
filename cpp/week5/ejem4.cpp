#include <iostream>

using namespace std;

int main() {


    int valores[6];
    int valor = 0;

    for (int i=0; i<6; i++){

        do {
            cout << "ingrese valor (" << i << "): ";
            cin >> valor;
            cout << "\n";
        } while (valor < 1 || valor > 255);

        valores[i] = valor;

    }

    for (int i=0; i<6; i++){

        cout << (char) valores[i] << " ";
    }
    return 0;
}