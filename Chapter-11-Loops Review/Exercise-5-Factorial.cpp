#include <iostream>
using namespace std;

int main() {

	int num; // Declaring variable for user input
	int factorial = 1; // Declaring variable for the formula in factorial

	cout << "Please input a number that you wanna see the factorial of\n"; // Asks the user for input
	cin >> num; // User inputs the number they wish to see

	while (cin.fail()) { // A cin.fail function if user inputs the wrong input
		cout << "Invalid input. Please try again\n";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}

	for (int counter = 1; counter <= num; counter++) { // For loop that counts from 1 until the user input in increments of 1

		factorial = factorial * counter; // Formula for factorial

	}
	
	cout << "The factorial of " << num << " is " << factorial << endl; // Outputs the factorial
	cin.get(); // Keeps the console window open
	return 0;

}