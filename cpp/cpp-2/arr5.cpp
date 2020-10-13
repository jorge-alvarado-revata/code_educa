// corregir
#include <iostream>
#include <iomanip>
using namespace std;
void arr2dAleatorio(int arrInt[][100], int n);

int main() {
  int n;
  cout << "ingrese el tamanio del arreglo:";
  cin >> n;  
  int arr2d[n][100];
  arr2dAleatorio(arr2d, n);

}


void arr2dAleatorio(int arrInt[][100], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arrInt[i][j] = rand()%100;
        }

    }

    for (int i=0; i<n;i++) {
        for (int j=0; j<n; j++)
          cout << arrInt[i][j] << " ";
        cout << "\n";
    }
    // diagonal
    cout << "\ndiagonal: \n";
    string tab = "";
    for (int i=0; i<n;i++)

        for (int j=0; j<n; j++) {
          if (i == j){
              cout <<  tab << arrInt[i][j] << "\n";
              tab = tab + "\t";
            }
        }

    cout << "\n";
    cout << "\ndiagonal superior: \n";
    // diagonal superior
      string espacio = "";
        for (int i=0; i<n;i++){
        for (int j=0; j<n; j++) {
          if (i <= j)
            cout << arrInt[i][j] << " ";
          else {
            cout << espacio;
            espacio = espacio + " ";
          }
        }
        cout << "\n";
        }
    // diagonal inferior
     cout << "\ndiagonal inferior: \n";
            for (int i=0; i<n;i++)
        for (int j=0; j<n; j++) {
          if (i >= j)
            cout <<  arrInt[i][j] << "\n";
        }

}


