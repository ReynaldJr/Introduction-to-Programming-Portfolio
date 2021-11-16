#include <iostream>
using namespace std;

int main() {

	int i = 1;
	int j = 1;

	while (i <= 5) {
		j = i;
		while (j <= 5) {
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}

	int a = 0;

	while (a < 5) {

		int b = 0;

		while (b <= a) {
			cout << "*";
			b++;

		}

		cout << endl;
		a++;

	}



}