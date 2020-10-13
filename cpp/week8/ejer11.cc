#include <iostream>

using namespace std;

int main(){
    
    int myarray[] = {1, 2, 3, 4, 5};
    
    int x = myarray[2];
    
    int y = *(myarray + 3);
    
    cout << "el elemento en la posicion 3 es: " << x << "\n";
    
    cout << "el elemento en la posicion 4 es: " << y << "\n";
    
    
}