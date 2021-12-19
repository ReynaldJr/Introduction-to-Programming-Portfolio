#include <iostream>
using namespace std;

int main() {

	cout << "Letter Checker\n"; // Outputs the title of the program

	char letter; // Declaring variable for user input

	cout << "\nInput a letter\n"; // Instructions for user input
	 
	cin >> letter; // User inputs the letter

	if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z') { // If user inputs a letter, lowercase or uppercase, this will be executed.

		if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') { // If user inputs a vowel, this will be executed

			cout << "The letter is a vowel\n"; // This message outputs if user inputs a vowel
		}
		else { // Executed if user inputs a consonant

			cout << "The letter is a consonant\n"; // This message outputs if user inputs a consonant

		}
	}
	else { // Executes if user doesn't input an alphabet

		cout << "Invalid\n"; // Outputs if user doesn't input an alphabet
	}
}
