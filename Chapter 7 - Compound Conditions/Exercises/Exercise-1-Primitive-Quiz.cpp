#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "Welcome to the Primitive Quiz. Good Luck and Do Your Best!\n"; // Outputs the title of the program

	cout << "Directions: Please answer the questions with CORRECTLY typed answers.\n\n"; // Outputs the instructions for user input

	string answer; // Declares the variable for user input

	cout << "Q.1 What is the capital of France?\n"; // Outputs the question to guide the user input
	cin >> answer; // User types their input

		if (answer == "Paris" || answer == "paris" || answer == "PARIS")
		{
			cout << "\nCongratulations, you got the correct answer!\n"; // If user inputs "Paris", "paris", or "PARIS," this message will be displayed.
		}

		else 
		{
			cout << "\nYou got the wrong answer!\n"; // If user doesn't input "Paris", "paris", or "PARIS," this message will be displayed.
			cout << "\nThe correct answer is: Paris\n"; // If user doesn't input "Paris", "paris", or "PARIS," this message will be displayed.
		} 

	cin.get(); // Keeps the console window open
	return 0;
}	