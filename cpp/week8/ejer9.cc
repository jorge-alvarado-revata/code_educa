#include <iostream>

using namespace std;

int *myFunction(int *fantasma) {

    *fantasma = 100;

    return fantasma;
}

int main(){

    int *ptr;
    int fantasma = 10;
    ptr = myFunction(&fantasma);

    cout << "El valor de fantasma debe ser 100: " << *ptr;

    return 0;
}