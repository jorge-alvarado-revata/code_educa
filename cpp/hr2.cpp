#include <iostream>


using namespace std;
int main()
{
    int n;
    
    int a[n];  

    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int neg=0, zero=0, pos=0;
    for (int i=0; i<=n; i++){
        if (a[i]==0)
            zero++;
        else if (a[i]> 0)
            pos++;
        else
            neg++;
        
    }
    cout << pos/n << "\n";
    cout << neg/n << "\n";
    cout << zero/n << "\n";
 
}
