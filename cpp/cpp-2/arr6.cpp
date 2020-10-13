#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cin >> n;

    int arrInt[n][n];

    srand(time(nullptr));

    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            arrInt[i][j] = rand() % 4;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << arrInt[i][j] << " ";
        }
        cout << "\n";
    }
    
    // suma de filas
    int sumas[n];
    for (int i=0; i<n; i++){
      int suma = 0;
      for (int j=0; j<n; j++)
        suma += arrInt[i][j]; 
      sumas[i] = suma;
    }
    cout << "las sumasde la filas es:";
    for (int i=0; i<n; i++)
        cout << "fila(" << i << "):" << sumas[i] << " ";

    return 0;
}
