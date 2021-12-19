#include <iostream>
using namespace std;

int main() {

	cout << "(^ v ^) Welcome to the Theme Park! (^ v ^)\n\n"; // Outputs the title of the program
	cout << "Before you enter the ride, please answer the following questions: \n\n";


	double height; // Declaring variable for height
	int age; // Declaring variable for age

	cout << "How tall are you (m)?\n"; // Asks user for input
	cin >> height; // User input

	cout << "How old are you?\n"; // Asks user for input
	cin >> age; // User input

	if (height > 0.6 && age >= 5) { // If statement to check

		cout << "\nYay! You can enter the ride! :D\n";

	}
	
	else if (height < 0.6 && age < 5){ // Else if statement to check

		cout << "\nAww... You can't enter the ride. D:\n";
	}
	else { // Else statement to check if invalid
		cout << "Incorrect Input\n";
	}

	cin.get(); // Keeps console window open
	return 0;

}