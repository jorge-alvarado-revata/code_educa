#include <iostream>

using namespace std;

int main()
{

  int myArray[] = {2, 4, 6, 8, 10};

  for (int i=0; i<5; i++){

	myArray[i] = myArray[i] + 1;
	cout << "valores :" << myArray[i] << "\n";
  }
	

    return 0;
}
