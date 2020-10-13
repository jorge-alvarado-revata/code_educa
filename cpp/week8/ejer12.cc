#include <iostream>
/*
 swap con parametros por referencia o punteros

*/
using namespace std;

void swap1(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap2(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    
    int x = 4;
    int y = 5;
    
    swap1(x, y);
    swap2(&x, &y);
    
    cout << "El valor de x es: " << x << " el valor de y es: " << y;
    return 0;
}