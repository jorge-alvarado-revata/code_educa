#include "Pompa.h"
Pompa& Pompa::operator+=(Pompa z){
    radio+=z.Radio();
    return *this;
}
