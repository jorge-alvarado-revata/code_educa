#include <iostream>
#include "CCliente.h"
#include "CBancoCentral.h"

int main() {
    std::cout << "Cliente consulta Tipo de Cambio" << std::endl;
    CCliente cliente("Juan", "Perez", 100);
    CBancoCentral bcr;
    cliente.ConsultarTipoCambio(&bcr);
    cliente.ImprimeSaldoEnDolares();
    return 0;
}