#include <iostream>
using namespace std;
int main() {

  int n;
  cout << "ingrese n:";
  cin >> n;

  int a2d[n][n];
  cout << "matriz 2d:\n";
  srand(time(nullptr));
  for(int i=0;i<n;i++){
    for(int j=0; j<n; j++){
      a2d[i][j] = rand()%100;
      cout << a2d[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "diagonal:\n";
  for(int i=0;i<n;i++){
    for(int j=0; j<n; j++){
      if (i == j)
      cout << a2d[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "diagonal superior:\n";
  for(int i=0;i<n;i++){
    for(int j=0; j<n; j++){
      if (i <= j)
      cout << a2d[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "diagonal inferior:\n";
  for(int i=0;i<n;i++){
    for(int j=0; j<n; j++){
      if (i >= j)
        cout << a2d[i][j] << " ";
    }
    cout << "\n";
  }



  
}
