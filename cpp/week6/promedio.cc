// Example program
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    
    cin >> a >> b;
    
    int c[a+b];
    
    for (int i=0; i < (a+b); i++)
    {
        c[i] = i*i;
        cout << c[i] << "\n";
    }
            
    return 0;
}

