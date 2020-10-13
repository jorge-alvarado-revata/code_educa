#include <iostream>

/*
    referencias.
    Diferencias con los punteros:
    1. Las refencias explicitamente desreferencian el valor. 
    2. Con referencia puede cambiar la direccion a donde apuntas.
    Por defecto ya apunta a la direccion de la variable inicializada.
    No requiere el uso de & para obtener la direccion de la asignacion.
    Los punteros si requieren eso para apuntar a una variable.
*/

using namespace std;

int main(){
    
    int x;
    int &y = x; // una referencia o alias de x
    
    x = 5;
    

    cout << "el valor de x: " << x << "\n";
    
    y = 6;

    cout << "el valor de y: " << y << "\n";
    
    cout << "el valor de x: " << x << "\n";

    return 0;
}