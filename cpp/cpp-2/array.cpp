#include <iostream>
#include <ctime>
/*
 *Ejercicios de arreglos.
1. Crear un array de tamaño N con números aleatorios.
2. Imprime los números en una sola línea.
3. Imprime los números en líneas independientes.
4. Encuentra el máximo valor del array.
5. Encuentra el promedio de los números.
6. Copia los elementos de un array en otro del mismo tamaño de modo inverso.
7. Crea un array de N*N con números aleatorios.
8. Imprime la diagonal del array.
9. Imprime la diagonal inferior.
10. Imprime la diagonal superior.

 * */
using namespace std;
int main() {
    int n;
    srand(time(nullptr));
    cout << "ingrese el tamanio:";
    cin >> n;
    // crea array de numeros aleatorios
    int arreglo[n];
    for (int i=0; i<n;i++){
        arreglo[i] =  rand()%100;
    }
    // imprime en una sola linea
    cout << "[";
    for(int j=0; j<n; j++)
        cout << arreglo[j] << ",";
    cout << "]";

    // imprime en lineas independientes
    cout << "[";
    for(int j=0; j<n; j++)
        cout << arreglo[j] << "\n";
    cout << "]";

    // encuentra el maximo valor

    int maximo = 0;
    for(int j=0; j<n; j++){
        if (arreglo[j] > maximo) {
            maximo = arreglo[j];
        }
    }
    cout << "maximo:" << maximo;

    // encuentra el promedio

    double suma = 0;
    for(int j=0; j<n; j++){
        suma += arreglo[j];
    }
    double promedio = suma/n;

    cout << "promedio:" << promedio;

    // copy en otro de modo inverso
    int arreglocopy[n];
    int jcopy = n-1;
    for(int j=0; j<n; j++){
        arreglocopy[jcopy] = arreglo[j];
        jcopy--;
    }


    // crea array de n*n numeros aleatorios
    int arreglo2d[n][n];
    for (int j=0; j<n;j++)
        for (int i=0; i<n;i++){
            arreglo2d[i][j] =  rand()%100;
        }

    for (int j=0; j<n;j++)
        for (int i=0; i<n;i++){
            if (i == j)
                cout << arreglo2d[i][j];
        }



    return 0;
}
