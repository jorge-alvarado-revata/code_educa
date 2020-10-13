#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(nullptr));

    int m[8][8];
    int num = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            num = rand() % 100;
            m[i][j] = num;
            cout << setw(5) << m[i][j] << " ";

        }
        cout << "\n";

    }

    cout  << "************************************************\n";

    int sumaDiagonal = 0;
    for(int i=0; i<8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i > j){
                cout << setw(5) << m[i][j] << " ";
                sumaDiagonal += m[i][j];
            }
            else
                cout << setw(5) << "0" << " ";
        }
        cout << "\n";
        
    }
    cout << "suma diagonal inferior es: " << sumaDiagonal;
    
    return 0;

}