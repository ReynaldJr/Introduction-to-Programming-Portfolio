#include <iostream>
using namespace std;

int main() {

	cout << "Welcome to the Letter Checker!\n\n";

	char letter;

	cout << "Please input a character to get started. (SMALL LETTER ONLY)\n";
	cin >> letter;

	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') { // Executed if user inputs a vowel

		cout << "The letter is a vowel";


	}
	else if (letter == 'b' || letter == 'c' || letter == 'd' || letter == 'f' || letter == 'g' || letter == 'h' || letter == 'j' || letter == 'k' || letter == 'l' || letter == 'm' || letter == 'n' || letter == 'p' || letter == 'q' || letter == 'r' || letter == 's' || letter == 't' || letter == 'v' || letter == 'w' || letter == 'x' || letter == 'y' || letter == 'z') { // Executed if user inputs a consonant

		cout << "The letter is a consonant.";
	}

	else { // Executed if user doesn't input a character
		cout << "The letter you inputted is either a capital letter, a number, or a special character, please try again.";
	}
}