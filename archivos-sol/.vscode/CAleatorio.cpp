#include "CAleatorio.h"
#include <fstream>
#include <iostream>
#include <string>
#include "Tipos.h"

const std::string NombreArchivo = "d://temp//16kints.txt";

CAleatorio::CAleatorio(){
    loaded = false;
    numeros = {};
}

void CAleatorio::LoadData(){
    Entero valor = 0;
    std::ifstream archivo(NombreArchivo, std::ios::in);
    if (archivo.is_open()){
        archivo >> valor;
        numeros.push_back(valor);
        while(!archivo.eof()){
            archivo >> valor;
            numeros.push_back(valor);
        }
        loaded = true;
        archivo.close();
    }
}

void CAleatorio::Show(){
        for (Entero i=0; i< numeros.size(); ++i) {
            std::cout << numeros[i] << "\n";
    }
}