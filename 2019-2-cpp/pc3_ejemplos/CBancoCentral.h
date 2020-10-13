#ifndef CBANCOCENTRAL_H
#define CBANCOCENTRAL_H

#include "Tipos.h"

class CBancoCentral {
    private:
        Real tipoCambio;
    public:
        CBancoCentral(){ tipoCambio = 3.14;}
        ~CBancoCentral(){}
        Real getTipoCambio();
};

#endif //CBANCOCENTRAL_H