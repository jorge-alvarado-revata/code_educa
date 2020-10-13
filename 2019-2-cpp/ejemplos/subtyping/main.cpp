#include <iostream>
#include <vector>
#include "Poligono.h"
#include "Triangulo.h"
#include "Elipse.h"
#include "Paralelograma.h"

using namespace std;

int main() {

    vector<Poligono*> poligonos =
            {new Triangulo(10, 10), new Paralelograma(20, 30), new Triangulo(2,5), new Elipse(10,10)};

    poligonos.push_back(new Elipse(10, 12));

    for (auto i = 0; i < poligonos.size(); i++)
        cout << "Area es: " << poligonos[i]->calcularArea() << endl;

    for (auto i = 0; i < poligonos.size(); i++)
        poligonos[i]->dibujar();

    for (auto i = 0; i < poligonos.size(); i++)
        delete poligonos[i];

    poligonos.clear();

    return 0;
}

