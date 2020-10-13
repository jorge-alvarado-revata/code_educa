#ifndef CCLIENTE_H
#define CCLIENTE_H

#include <iostream>
#include "Tipos.h"
#include "CBancoCentral.h"

class CCliente {
    private:
        Cadena nombre;
        Cadena apellidos;
        Real tipoCambio;
        Real ahorro;
    public:
        CCliente(); // Constructor por defecto
        CCliente(Cadena _nombre, Cadena _apellidos, Real _ahorro); // Constructor con parametros.
        ~CCliente(){} // Destructor por defecto
        void ConsultarTipoCambio(CBancoCentral *_pbanco);
        void ImprimeSaldoEnDolares();

};

#endif //CCLIENTE_H