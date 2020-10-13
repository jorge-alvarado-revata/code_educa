#include <iostream>
#include <stdio.h>

using namespace std;

void copiar(char *des, char *ori);

int main(){

    
    char str1[8] = "Ricardo";
    char str2[] = "Ricardo";
    //char *str3 = "Ricardo";
    char str4[8] = {'R', 'i', 'c', 'a', 'r', 'd', 'o', '\0'};
    char str5[8];
    cout << "antes str5: " << str5 << "\n";
    copiar(str5, str1);
    cout << "despues str5: " << str5;
    
    uintptr_t p = reinterpret_cast<uintptr_t> (str5);
    cout << "la direccion en decimal: " << hex << p << endl;
    cout << str5 << "\n";
    printf("%p",str5);
    
    return 0;
}

void copiar(char *des, char *ori){
    
    while (*ori) {
        *des = *ori;
        des++;
        ori++;
    }
}