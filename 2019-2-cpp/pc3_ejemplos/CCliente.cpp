#include "CCliente.h"

CCliente::CCliente(Cadena _nombre, Cadena _apellidos, Real _ahorro){
    nombre = _nombre;
    apellidos = _apellidos;
    ahorro = _ahorro;
} 

void CCliente::ConsultarTipoCambio(CBancoCentral *_pbanco){
    tipoCambio = _pbanco->getTipoCambio();
}

void CCliente::ImprimeSaldoEnDolares() {
    if (tipoCambio > 0)
        std::cout << "El Saldo en Dolares es: " << tipoCambio*ahorro;
    else
        std::cout << "Aun no se obtiene el tipo de cambio";
}