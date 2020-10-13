#include <iostream>
#include "Ejemplo1a.h"

int main(){
	int x = 0;
	int y = 3;
	swap<int>(x,y);
	std::cout << x;
	return 0;
}