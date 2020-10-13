// Example program
#include <iostream>
#include <iomanip>



using namespace std;
int main()
{
    int alice = 0;
    int bob = 0;
    
    int a[] = {0, 0, 0};
    int b[] = {0, 0, 0};    
    
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    
    for (int i=0; i<=2; i++){
        if (a[i] > b[i]){
            alice++;
        }
        else if (a[i] < b[i]) {
            bob++;
        }
    } 
    cout << alice << " " << bob;
  
}
