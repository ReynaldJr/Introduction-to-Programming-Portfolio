#include <iostream>
using namespace std;

int main()
{
	cout << "A program that counts up from 0 to 50 in increments of 1\n";

	for (int a = 0; a <= 50; a++) { // For loop that counts variable 'a' from 0 to 50 in increments of 1

		cout << a << endl; // Displays the numbers
	}

	cout << "\nA program that counts down from 50 to 0 in decrements of 1\n";

	for (int b = 50; b >= 0; b--) { // For loop that counts variable 'b' from 50 to 0 in decrements of 1

			cout << b << endl; // Displays the numbers
	}


	cout << "\nA program that counts up from 30 to 50 in increments of 1\n";

	for (int c = 30; c <= 50; c++) { // For loop that counts variable 'c' from 30 to 50 in increments of 1


		cout << c << endl; // Displays the numbers

	}

	cout << "\nA program that counts down from 50 to 10 in decrements of 2\n"; // For loop that counts variable 'd' from 50 to 10 in decrements of 2

	for (int d = 50; d >= 10; d -= 2) {

		cout << d << endl; // Displays the numbers

	}

	cout << "\nA program that counts up from 100 to 200 in increments of 5\n";

	for (int e = 100; e <= 200; e += 5) { // For loop that counts variable 'e' from 100 to 200 in increments of 5

		cout << e << endl; // Displays the numbers
	}

	cin.get(); // Keeps the console window open
	return 0;
}

