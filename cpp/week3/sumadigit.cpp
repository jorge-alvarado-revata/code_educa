#include <iostream>
using namespace std;

int main()
{
  long int n;
  long int sumaDig;
  
  cin >> n;
  sumaDig =0;
  while(n!=0)
  {
    sumaDig = sumaDig + (n%10);
    n/=10;
  }
  cout << sumaDig;
}
