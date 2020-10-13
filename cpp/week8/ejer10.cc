#include <iostream>

using namespace std;

int main(){
    int * ptr;

    int myarray[4] = {1, 2, 3, 4};

    ptr = myarray;

    ptr = ptr + 3;

    cout << "el valor actual es: " << *ptr << "\n";

    ptr = myarray;

    cout << "el valor de myarray es: ";
    for (int i=0; i<3; i++){

        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}