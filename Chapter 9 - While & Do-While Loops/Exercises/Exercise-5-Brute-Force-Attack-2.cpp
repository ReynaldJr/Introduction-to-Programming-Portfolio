#include <iostream>
#include <string>
using namespace std;

int main() {

	string password; // Used string instead of integer, so the input can also take letters and show an error for incorrect passcode
	int attempts = 5; // Initializing the variable for the remaining attempts

	while ( attempts > 0)  { // While loop if attempts is more than 0

		cout << "Please enter the correct passcode" << " ( " << attempts << " attempts remaining )\n"; // Asks the user for input
		cin >> password; // User inputs the passcode

		if (password == "246") { // If statement for correct passcode

			cout << "You have entered the correct passcode!\n";  // Message if user inputs the correct passcode
			cout << "Entering the safe...\n"; // Message if user inputs the correct passcode
			break; // Break statement to stop the program
		}


		else { // Else statement if user inputs the wrong passcode
			cout << "Incorrect passcode\n"; // Message if user inputs the wrong passcode
			attempts--; // Decrementing the remaining attempts

		}

	}

	if (attempts == 0) { // If statement if user has no more attempts left
		cout << "You have used up all your remaining attempts\n";
		cout << "Alerting the authorities...\n"; // Notifying the user that the authorities have been alerted
	}

	cin.get(); // Keeps the console window open
	return 0;


}