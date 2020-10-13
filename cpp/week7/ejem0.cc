#include <iostream>

using namespace std;

int main(){
    
    int sudoku[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
    
    sudoku[0][0] = 1;
    sudoku[1][1] = 3;
    sudoku[3][3] = 9;
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++)
            cout << sudoku[i][j] << " ";
        cout << "\n";
    }
}