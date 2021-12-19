#include <iostream>
using namespace std;

int main() {
	int myInt; // Declaring variable for user input

	int counter = 0; // Declaring variable for incrementing

	cout << "Enter a number\n"; // Declaring variable for user input

	cin >> myInt; // User inputs their number

	do {
		cout << counter << endl; // Outputs the number
		counter++; // Incrementing the number

	} while (counter <= myInt); // Loops until the counter reached the number of the user input

    cin.get(); // Keeps console window open
	return 0;
}