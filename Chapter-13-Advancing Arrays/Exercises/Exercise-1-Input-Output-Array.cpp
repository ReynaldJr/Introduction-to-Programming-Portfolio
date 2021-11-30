#include <iostream>
using namespace std;

int main()
{
	int numbers[5]; // Declaring variable for user input

	for (int i = 0; i < 5; i++) { // A for loop that counts the variable from 0 to 4 in increments of 1

		cout << "Please input number " << i+1 << endl; // Asks the user for input 5 times

		cin >> numbers[i]; // User inputs 5 times

		while (cin.fail()) { // A cin.fail function if user enters wrong input
			cout << "Incorrect input! Please try again\n"; // Asks the user for input again
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> numbers[i]; // User enters the input again
		}
	}

	cout << "\nThe numbers you have inputted are:\n"; // Tells the user the numbers they inputted

	for (auto number: numbers) { // For loop to display the numbers that were outputted

		cout << number << endl; // Displays the outputted numbers from the user
	
	}

	cin.get(); // Keeps the console window open
	return 0;

}