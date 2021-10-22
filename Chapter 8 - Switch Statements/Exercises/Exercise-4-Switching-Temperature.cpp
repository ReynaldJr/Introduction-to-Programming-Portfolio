#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "Welcome to the Switching Temperature Program!\n\n"; // Outputs the title of the program

	cout << "To get started please type 'c' to convert from Celsius to Fahrenheit or 'f' to convert from Fahrenheit to Celsius\n"; // Outputs the instructions of what should the user input.

	char temp; // Declaring a char variable
	string input = ""; // Declaring the input with string to check its size

	getline(cin, input); // Gets the user input, getline reads every input including the space character. Thus, the whole line will be checked for its length.

	if (input.size() != 1) { // If the user inputs a string size that is not equal to one, or more than one letter, this will be executed.

		cout << "You have entered more than one letter\n"; // Outputs an error message that the user inputted more than one letter.
	}

	else { // If the user inputs a string that is equal to one, this will be executed.

		temp = input.at(0); // Converting the string into char because a switch can only accept an input that is either an int or char.

		double value; // Declaring the double variable that will be used for computation

		switch (temp) {

		case 'c': // Case for lowercase c
		case 'C': // Case for uppercase C
		{
			cout << "Enter the temperature in Celsius that will be converted to Fahrenheit\n"; // Instructions for user input.
			cin >> value; // User inputs the value

			if (std::cin.fail()) // a cin.fail function (If user inputs a letter or a special character, an error will be displayed.
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Please enter a number only\n";
				return 0;
			}

			else { // If user inputs a number, this will be executed


				value = (value * 1.8) + 32; // Formula to convert from Celsius to Fahrenheit

				cout << "After the conversion, the temperature now is " << value << " Fahrenheit"; // Outputs the result

			}
			break; // Stops the case


		}

		case 'f': // Case for lowercase f
		case 'F': // Case for uppercase F

		{
			cout << "Enter the temperature in Fahrenheit that will be converted to Celsius\n"; // Instructions for user input.
			cin >> value; // User inputs the value

			if (std::cin.fail()) // a cin.fail function (If user inputs a letter or a special character, an error will be displayed.
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Please enter a number only\n";
				return 0;
			}

			else {


				value = (value - 32) * 0.5556; // Formula to convert from Fahrenheit to Celsius.

				cout << "After the conversion, the temperature now is " << value << " Celsius"; // Outputs the result

			}

			break; // Stops the case

		}


		default: // Default case

			cout << "Invalid Input\n"; // If user doesn't input 'c', 'C', 'f' or 'F', this message will be outputted
		}
	}


	cin.get(); // Keeps the console window open.
	return 0;

}