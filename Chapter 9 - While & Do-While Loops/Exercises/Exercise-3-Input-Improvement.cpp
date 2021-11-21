#include <iostream>
using namespace std;

int main() {

	char input; // Declaring variable for user input

	do { 

		cout << "Would you like to Quit (Y/N)?\n"; // Instructions for user input
		cin >> input; // User inputs their answer


	} while ((input != 'Y') && (input != 'y')); // Improved the code here to allow the program to read lowercase y. 

	cin.get(); //Keeps the console window open
	return 0;
}