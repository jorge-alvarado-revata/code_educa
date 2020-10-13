#include <iostream>
#include <vector>
#include "Astro.h"
#include "Planeta.h"

using namespace std;

int main() {
    vector<Astro*> astros =
            {new Planeta(), new Cometa(1,2), new Estrella()};

    astros.push_back(new Cometa(10, 12));

    for (auto i = 0; i < astros.size(); i++)
        cout << "Area es: " << astros[i]->size() << endl;

    for (auto i = 0; i < astros.size(); i++)
        astros[i]->dibujar();

    for (auto i = 0; i < astros.size(); i++)
        delete astros[i];

    astros.clear();

    return 0;
}