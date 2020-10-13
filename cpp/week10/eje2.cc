#include <iostream>

// agrupando con una estructura de datos de tipo array los datos de 3 personas.

using namespace std;

void printPersona(string arr[][3], int indicePersona);

int main() {

// con array de 1 dimension    
    int edades[3] = {22, 24, 23};
    string profesion[3] = {"ninguna", "doctor", "mecanico"};
    string nombres[3] = {"juan", "roxana", "marcela"};

// con array  de dos dimensiones

    string personas[3][3];
    
    personas[0][0] = "22";
    personas[0][1] = "ninguna";
    personas[0][2] = "juan";
    
    personas[1][0] = "24";
    personas[1][1] = "doctor";
    personas[1][2] = "roxana";
    
    personas[2][0] = "23";
    personas[2][1] = "mecanico";
    personas[2][2] = "marcela";
    
    
// modificar la edad de la tercera persona
    personas[2][0] = "24";

// notese que solo se pudo definir un solo tipo de dato para todas
// las propiedades en este caso cadenas.

    printPersona(personas, 1);
    return 0;
}

void printPersona(string arr[][3], int indicePersona) {
    // notese que debemos saber el tamaño del arreglo
    for (int i=0; i < 3; i++) {
        cout <<"valor: " << arr[indicePersona][i] <<" ";
    } 
    cout << "\n";
}