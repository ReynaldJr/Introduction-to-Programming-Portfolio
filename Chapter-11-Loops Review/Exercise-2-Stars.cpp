#include <iostream>
using namespace std;

int main()
{

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


}
