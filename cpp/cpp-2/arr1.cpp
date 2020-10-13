#include <iostream>
#include <ctime>

using namespace std;
void llenaValoresAleatorios( int a[], int n);
int sumaMultiplosdeTres(int a[], int n);
void printArr(const int a[], int n);

int main() {
    int n;
    cout << "ingrese n:";
    cin >> n;
    int arrInt[n];
    llenaValoresAleatorios(arrInt, n);
    printArr(arrInt, n);
    cout << "suma de multiplos de 3:" << sumaMultiplosdeTres(arrInt,n);
    //printArr(arrInt, n);
    return 0;
}

void printArr(const int a[], int n){
  for (int i=0; i<n; i++)
    cout << "arr[" << i << "] =" << a[i] << "\n"; 

}

int sumaMultiplosdeTres(int a[], int n){
  int suma = 0;
  for (int i=0; i<n; i++)
    if (a[i]%3==0)
      suma +=a[i];
  return suma;

}

void llenaValoresAleatorios( int a[], int n) {
    srand(time(nullptr));
    for (int i=0; i<n;i++)
        a[i] = rand()%100;
}
