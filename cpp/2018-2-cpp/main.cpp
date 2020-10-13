#include <iostream>
#include <cmath>
#include "sumatorias.h"
using namespace std;

int main() {

    std::cout << "Hello, World!" << std::endl;
    Sumatoria sumatoria;

    double res = sumatoria.sin(1);

    cout << "res: " << res << "\n";

    double res2 = sin(1);

    cout << "res math.sin : " << res2;
    return 0;
}