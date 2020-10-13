#include <iostream>

using namespace std;

int main(){
    
    int * ptrArr = nullptr;
    
    ptrArr = new int[3];
    ptrArr[0] = 1;
    ptrArr[1] = 3;
    ptrArr[2] = 5;
    
    
    for(int i=0; i<3; i++){
        cout << *(ptrArr+i) << " ";
    }
    
    
    delete [] ptrArr;
    
    ptrArr = nullptr;
    
    return 0;
}