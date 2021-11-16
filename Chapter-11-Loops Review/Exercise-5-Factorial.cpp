#include <iostream>
using namespace std;

int main() {

	int num;
	int factorial = 1;

	cout << "Please input a number that you wanna see the factorial of\n";
	cin >> num;

	for (int counter = 1; counter <= num; counter++) {

		factorial = factorial * counter;

	}
	
	cout << "The factorial of " << num << " is " << factorial << endl;

}