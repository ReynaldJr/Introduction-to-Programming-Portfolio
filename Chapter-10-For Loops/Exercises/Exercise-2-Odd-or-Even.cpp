#include <iostream>
using namespace std;

int main()
{

	for (int a = 20; a <= 24; a++) { // For loop that counts numbers from 20 - 24 in increments of 1

		cout << a; // Displays the numbers

		if (a % 2 == 0) { // If a number is divided by 2 and has a remainder of 0, this will execute

			cout << " - Even\n"; // Outputs that the number is Even
		}

		else { // If a number is divided by 2 and has a remainder that is not 0, this will execute

			cout << " - Odd\n"; // Outputs that the number is Odd
		}
	}

	cin.get(); // Keeps the console window open
	return 0;

}