#include <iostream>

using namespace std;

int main()
{

    int N = -1;
    int valor = -1;
    int suma = 0;
    cout << "ingrese  N: ";
    cin >> N;
    int numeros[N];
    int contador=0;

    while (valor != 0 && contador < N){
        cout << "ingrese valor: ";
        cin >> valor;
        numeros[contador] = valor;
        contador++;
    }

    for(int i=0; i<N; i++){
        suma+= numeros[i];
    }
    cout << "la suma es: "	<< suma;

    return 0;
}
