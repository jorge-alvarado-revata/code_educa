#ifndef CALEATORIO_H
#define CALEATORIO_H

#include <iostream>
#include <Vector>
#include "Tipos.h"

using namespace std;
class CAleatorio {
    private:
        vector<Entero> numeros;
        Boleano loaded; 
        void InsertSort();
        void QuickSort();

    public:
        CAleatorio();
        void LoadData();
        void Sort();
        void Show();
        Entero BinarySearch();

};

#endif // CALEATORIO_H