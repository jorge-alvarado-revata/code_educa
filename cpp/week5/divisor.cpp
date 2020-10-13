#include <iostream>
using namespace std;
int divisor(int n, int &res) {
    res = n % 10;
    return n / 10;
}

int main(){
    int n, res, d;
    
    cout << "ingrese n: ";
    cin >> n;
    d = divisor(n, res);
    cout << "divisor:  " << d << " res: " << res;
    
    return 0;
}