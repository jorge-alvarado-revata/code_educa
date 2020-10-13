#include <iostream>
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

    for (int i=0; i<n;i++)
        for (int j=0; j<n; j++)
        cout << "j[" << i << "][" << j << "]:"<< arrInt[i][j] << "\n";
}
