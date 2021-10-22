#include <iostream>
using namespace std;

int main() {

	cout << "Capital of the Country Examination\n\n"; // Outputs the title of the program

	cout << "1. What is the Capital of France?\n"; // Outputs the first question

	cout << "To answer, please select one of the choices below\n\n"; // Outputs the instructions for user input

	cout << "Enter 'P' if the answer is Paris\n"; // Tells the user what input to put for Paris

	cout << "Enter 'L' if the answer is London\n"; // Tells the user what input to put for London

	cout << "Enter 'M' if the answer is Manila\n"; // Tells the user what input to put for Manila

	cout << "Enter 'N' if you don't know the answer\n"; // Tells the user what to input if they don't know the answer

	char capital; // Declaring the variable for user input
	cin >> capital; // User inputs their answer

	switch (capital) {

	case 'P': // Case for uppercase P
	case 'p': // Case for lowercase p
	{
		cout << "Nice job! You got the correct answer. The capital of France is Paris.\n"; // This message outputs if user answers Paris
		break; // Stops the case
	}

	case 'L': // Case for uppercase L
	case 'l': // Case for lowercase l
	{
		cout << "Aww... You got the wrong answer, it's not London. The capital of France is Paris.\n"; // This message outputs if user answers London
		break; // Stops the case
	}

	case 'M': // Case for uppercase M
	case 'm': // Case for lowercase m
	{
		cout << "Aww... You got the wrong answer, it's not Manila. The capital of France is Paris.\n"; // This message outputs if user answers Manila
		break; // Stops the case
	}

	case 'N': // Case for uppercase N
	case 'n': // Case for lowercase n
	{
		cout << "Aww... You don't know the answer. The capital of France is Paris.\n"; // This message outputs if the user doesn't know the answer.
		break; // Stops the case
	}

	default: { // Default case

		cout << "Invalid Input\n"; // This message outputs if the user doesn't input 'P', 'p', 'L', 'l', 'M', 'm', 'N', or 'n'

	}

		  

	}
	cin.get(); // Keeps the console window open
	return 0;
}

