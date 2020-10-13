#include "Tipos.h"
#include "CLavadora.h"
#include "CMotor.h"
#include "CTambor.h"

#include <iostream>
// Observe que motor y tambor solo existen en el ciclo de vida de lavadora
CLavadora::CLavadora(Entero _tamanioTambor, Entero _voltajeMotor){
    motor = new CMotor(_voltajeMotor);
    tambor = new CTambor(_tamanioTambor);
}
CLavadora::~CLavadora(){
    delete motor;
    delete tambor;
}
void CLavadora::lavar(){
    std::cout << "iniciando lavado...";
}