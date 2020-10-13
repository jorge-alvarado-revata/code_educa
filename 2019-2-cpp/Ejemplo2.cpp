//
// Created by Jorge Alvarado on 04/11/2019.
// {2) Inclusion o Subtype Polymorphism (1)}
#include <iostream>
class Felino {
public:
    virtual void maullido() = 0;
};

class Gato: public Felino {
public:
    void maullido() {
        std::cout << "Maullido como un gato\n";
    }
};

class Tigre: public Felino {
public:
    void maullido() {
        std::cout << "Maullido como un tigre!!\n";
    }
};

class Puma: public Felino {
public:
    void maullido() {
        std::cout << "Maullido como un Puma!!\n";
    }
};

void do_maullido(Felino *gato) {
    gato->maullido();
}

void ejemplo2() {

    Gato gato;
    Tigre tigre;
    Puma puma;
    do_maullido(&gato);
    do_maullido(&tigre);
    do_maullido(&puma);
}
