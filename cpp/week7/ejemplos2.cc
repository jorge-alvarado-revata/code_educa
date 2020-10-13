#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    
    string hola = "";
    
    vector<int> myvector = {1, 2, 3};
    
    for (int i=0; i< myvector.size(); i++)
        cout << myvector[i] << " ";
        
        
    cout << hola;
    return 0;
}