#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
	srand(8);
	array<int, 10> randomArry;

	for (int i = 0; i < 10; i++) {
		randomArry[i] = rand() % 50;

		cout << randomArry[i] << endl;
	}


}