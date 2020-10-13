#include <iostream>

using namespace std;

int main() {

    int x = 10, y = 20;
    
    x += y;
    
    int z = ++x;
    
    cout << "z: " << z << endl;
    
    cout << "x: " << x << endl;
    
    cout << "y: " << y << endl;
    
    int w = y++;
    
    cout << "y: " << y << endl;
    
    cout << "w: " << w << endl;
    
    cout << "y: " << y << endl;
    
    return 0;
}
