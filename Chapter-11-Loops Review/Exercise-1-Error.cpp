#include <iostream>
#include <string>
using namespace std;
int main()
{
	int y;
	cout << "Enter a number you want the table of: " << endl;
	cin >> y;
	while (cin.fail())
	{
		cout << "Invalid command enter the number again: " << endl;

		// Added two new codes to fix the cin.fail function

		cin.clear(); // Clearing the error flag on the input to make the next work correctly
		cin.ignore(1000, '\n'); // Skips up to the next new line (up to 1000 characters)

		cin >> y;
	}

	for (int x = 0; x <= 10; x++)
	{
		cout << y << " x " << x << " = " << y * x << endl;
	}
}