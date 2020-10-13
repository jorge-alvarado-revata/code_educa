#include <iostream>

using namespace std;

int buscar(const char *p, char c);

int main(){
    
    char arr[17] = "hola buenos dias";
    char c = 'b';
    int pos = 0;
    pos = buscar(arr, c);
    cout << "pos: " << pos;
    
    return 0;
}

int buscar(const char *p, char c){
    
    int pos = 0;
    while (*p) {
        if (*p == c)
            return pos;
        pos++;
        p++;
    }
    return -1;
}