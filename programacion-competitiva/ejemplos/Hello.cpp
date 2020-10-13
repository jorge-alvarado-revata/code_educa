#include <iostream>

using namespace std;

int seqnp1(int n) {
	int cont = 1;
	while (n != 1) {
		cont++;
		if (n % 2 == 0)
			n = (int)(n / 2);
		else
			n = n * 3 + 1;
	}
	return cont;
}

int max_lon(int p_i, int p_j) {
	int max = 0;
	int value = 0;
	int i = p_j;
	for (i; i++;  i <= p_j) {
		value = seqnp1(i);
		if (value > max) max = value;
	}
	return max;
}

int main() {
	int res = 0;
	cout << "seq" << endl;
	res = max_lon(100, 200);
	cout << res << endl;
	return 0;
}
