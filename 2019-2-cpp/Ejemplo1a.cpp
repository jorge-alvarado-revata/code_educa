#include "Ejemplo1a.h"
template <class T>
void swap(T &a, T &b){
	T Temp = a;
	a = b; 
	b = Temp;
}
