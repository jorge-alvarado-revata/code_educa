//-- Fibonacci - suma de los terminos hasta el n-esimo termino

#include <iostream>
using namespace std;

int main()
{
  int nt,ct;
  long int st, t1, t2, termino;
  
  do{
    cin >> nt;    
  }while(nt<0);
 
  if (nt==0) st=0;
  if (nt==1) st=1;
  if (nt>1)
  { 
    ct=2;
    t1 = 0;
    t2 = 1;
    st=1;
    while(ct<=nt)
    {
      termino = t1 + t2;    
      st = st + termino;
      t1 = t2;
      t2 = termino;
      ct++;
    }
  }
  cout << st;
  return(0);
}
