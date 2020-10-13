#include <iostream>

using namespace std;

int main() {


	int N = 0;

	cin >> N;

	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if (j % i == 0 || i % j == 0)
				cout << "* ";
			else
				cout << "  ";			
		}
		cout << i << "\n";
	}

	return 0;

}