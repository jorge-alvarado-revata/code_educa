//
// Created by Jorge Alvarado on 08/11/2019.
//

#ifndef CASTING_EJEMPLO2_H
#define CASTING_EJEMPLO2_H

void ejemplo2() {
    struct A {};
    struct B {
        B (A a) {}
    };

    A a;
    B b = a;
}

#endif //CASTING_EJEMPLO2_H
