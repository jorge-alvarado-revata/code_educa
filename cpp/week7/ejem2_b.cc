#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(){
    
    srand(time(nullptr)); 
    int medidas[8][12];
    int medida = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<12; j++){
            medida = 15 + rand() % 20;
            medidas[i][j] = medida;
            cout << setw(5) << medidas[i][j]; 
        }
        cout << "\n";
    }
    
    
    return 0;
}
