#include <iostream>
using namespace std;

int main() {
	int myInt; // Declaring variable for user input

	int counter = 0; // Declaring variable for incrementing

	cout << "Enter a number\n"; // Declaring variable for user input

	cin >> myInt; // User inputs their number

	while (cin.fail()) { // A cin.fail function to show error if user inputs anything other than a number
		cout << "Invalid input, please try again\n";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> myInt;
	}

	do {
		cout << counter << endl; // Outputs the number
		counter++; // Incrementing the number

	} while (counter <= myInt); // Loops until the counter reached the number of the user input

	cin.get(); // Keeps console window open
	return 0;
}