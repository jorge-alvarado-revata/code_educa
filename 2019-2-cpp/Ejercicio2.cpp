//
// Created by Jorge Alvarado on 04/11/2019.
//
#include <iostream>
#include "tipos.h"
#include <string>


class Imagen {
private:
    entero alto;
    entero ancho;
public:
    Imagen(entero _alto, entero _ancho):alto{_alto}, ancho{_ancho} {}
    virtual void guardar(const std::string &Nombre) = 0;
};
class JPEG : public Imagen {
public:
    JPEG(entero _alto, entero _ancho):Imagen(_alto, _ancho){}
    void guardar(const std::string &Nombre) override ;
};
class PNG: public Imagen {
public:
    PNG(entero _alto, entero _ancho):Imagen(_alto, _ancho){}
    void guardar(const std::string &Nombre) override ;
};

void PNG::guardar(const std::string &Nombre) {
    std::cout << "Guardando un archivo PNG " << Nombre;
}
void JPEG::guardar(const std::string &Nombre){
    std::cout << "Guardando un archivo JPEG" << Nombre;
}

void guardarImagen(Imagen *img, const std::string &Nombre)
{
    img->guardar(Nombre);
}

int main() {

    JPEG jpg(10, 20);
    PNG png(30, 30);
    std::string Nombre1 = "rombo.jpg";
    std::string Nombre2 = "cubo.png";
    guardarImagen(&jpg, Nombre1);
    guardarImagen(&png, Nombre2);
}