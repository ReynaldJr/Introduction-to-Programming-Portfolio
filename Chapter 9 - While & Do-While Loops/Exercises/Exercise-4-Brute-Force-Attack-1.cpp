#include <iostream>
#include <string>
using namespace std;

int main() {

	string password; // Used string instead of integer, so the input can also take letters and show an error for incorrect passcode
	cout << "Please enter the passcode to enter the safe\n"; // Asks the user for user input
	cin >> password; // User inputs the passcode

	while (true) { 

		if (password == "246") { // If statement if user inputs the correct passcode

			cout << "Correct Passcode!\n"; // Outputs that the user inputted the correct input
			cout << "Entering the safe...\n";
			break; // Break statement to stop the loop
		}

		else { // Else statement if user doesn't input the correct passcode

			cout << "Invalid Passcode\n";  // Outputs that the user inputted the wrong input
			cout << "Please enter the passcode to enter the safe\n"; // Asks the user for input again
			cin >> password; // User inputs their passcode again

		}
	}

	cin.get(); //Keeps the console window open
	return 0;



}