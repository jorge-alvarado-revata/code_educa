#include <iostream>

using namespace std;

int main(){

    
    int arr[3] = {1, 2, 3};
    
    int x = 10;
    
    int *ptr = &x;

    cout << "contenido de ptr: " << *ptr << "\n";
    
    cout << "direccion de ptr: " << ptr << "\n";
    
    cout << "ahora apuntamos a un array de enteros:\n";
    
    ptr = arr;

    cout << "direccion de ptr: " << ptr << "\n";
    
    cout << "contenido de ptr: " << *ptr << "\n";
    
    cout << "direccion de ptr: " << &ptr << "\n";
        
    
    char str1[8] = "Ricardo";
    char str2[] = "Ricardo";
    char *str3 = "Ricardo";
    char str4[8] = {'R', 'i', 'c', 'a', 'r', 'd', 'o', '\0'};
    
    cout << "El valor de str1: " << str1 << "\n";
    cout << "El valor de str2: " << str2 << "\n";
    cout << "El valor de str3: " << str3 << "\n";
    cout << "valor de *str1: " << *str1 << "\n";
    cout << "valor de *str2: " << *str2 << "\n";
    cout << "valor de *str3: " << *str3 << "\n";
    
    cout << "direccion de str1: " << &str1 << "\n";
    cout << "direccion de str2: " << &str2 << "\n";
    cout << "direccion de str3: " << &str3 << "\n";
    
    str1 = str2;
    
    cout << "comparacion?:" << (str1 == str2) << "\n";
    cout << "El valor de str1: " << (str1) << "\n";
    cout << "El valor de str2: " << (str2) << "\n";
    
    return 0;
}