#include <iostream>

using namespace std;

int main(){


    int asientos[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


    int contadorAsignados = 0;
    int eleccion = 0;
    int asientoAsignado = 0;
    int primera = 0;
    int economica = 5;

    while(contadorAsignados <= 10) {

        do {
            cout << "Por favor ingrese 1 para primera clase.\n";
            cout << "Por favor ingrese 2 para clase economica.\n";
            cin >> eleccion;
        } while (eleccion != 1 && eleccion != 2);

        if (eleccion==1){
            int limitePrimera = 4;
            bool nolibre = true;
            while((nolibre) && (primera <= limitePrimera)){
                if (asientos[primera] == 0){
                    asientos[primera] = 1;
                    asientoAsignado = primera + 1;
                    primera++;
                    contadorAsignados++;
                    nolibre = false;
                    cout << "Tiene asignado el asiento: " << asientoAsignado << " en primera clase. \n";
                }
                else {
                    primera++;
                }
            }
            if (primera > limitePrimera){

                int opcion = 0;
                cout << "No existe mas disponibles desea elegir clase economica: si(1) no(2)\n";
                cin >> opcion;
                if (opcion == 1)
                    eleccion = 2;
                else
                    cout << "El proximo vuelo sale en 3 horas.\n";
            }
        }

        if (eleccion==2){
            int limiteEconomica = 9;
            bool nolibre = true;
            while((nolibre) && (economica <= limiteEconomica) ){
                if (asientos[economica] == 0){
                    asientos[economica] = 1;
                    asientoAsignado = economica+1;
                    economica++;
                    contadorAsignados++;
                    nolibre = false;
                    cout << "Tiene asignado el asiento: " << asientoAsignado << " en primera economica. \n";
                }
                else {
                    economica++;
                }
            }

            if (economica > limiteEconomica){

                int opcion = 0;
                cout << "No existe mas disponibles desea elegir clase Primera: si(1) no(2)\n";
                cin >> opcion;
                if (opcion == 1)
                    eleccion = 1;
                else
                    cout << "El proximo vuelo sale en 2 horas.\n";
            }

        }
    }

    return 0;
}

