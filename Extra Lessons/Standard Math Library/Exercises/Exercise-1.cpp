#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	cout << "Please input a number to find the square and cube root\n";
	int input;
	cin >> input;
	while (cin.fail()) {
		cout << "Invalid input, please try again!\n";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> input;
	}

	cout << "The square root of " << input << " is " << sqrt(input) << endl;
	cout << "The cube root of " << input << " is " << cbrt(input) << endl;

	return 0;
}