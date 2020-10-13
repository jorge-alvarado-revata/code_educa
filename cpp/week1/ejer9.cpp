#include <iostream>

using namespace std;

int main() {

    int x = 45, y = 55;

    x += y;

    cout << "x+=y :" << x << endl;

    int z = ++x;

    cout << "x: " << z << endl;

    cout << "x: " << x++ << endl;

    cout << "x: " << x << endl;

    int w = x-= y;

    cout << "x: " << w << endl;


    return 0;
}
