#include <iostream>

using namespace std;

int main()
{

    int N = -1;
    int valor = -1;
    int sumaPares = 0;
    int sumaImpares = 0;
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
        if (numeros[i] % 2 == 0)
            sumaPares += numeros[i];
        else
            sumaImpares += numeros[i];
    }
    cout << "la diferencia entre pares e impares es: "  << sumaPares - sumaImpares;

    return 0;
}
