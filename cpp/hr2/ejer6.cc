#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n, m;
    int x, y;
    cin >> n >> m;
    cin >> x >> y;    
    int matrix[n][m];
    int num = 0;
    int contador = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            matrix[i][j] = contador;
            contador += 1;
        }
    }

    
    int sumax = 0;
    int sumay = 0;
    
    for(int i=0; i<n; i++) {
        sumax += matrix[i][y];
    }
    
    for(int j=0; j<m; j++) {
        sumay += matrix[x][j];
    }
    cout << sumax + sumay;
    
    return 0;

}