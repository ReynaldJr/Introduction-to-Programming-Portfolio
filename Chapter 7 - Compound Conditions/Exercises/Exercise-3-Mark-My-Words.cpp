#include <iostream>
using namespace std;

int main() {

	cout << "This Is a Program to Check the Grade Boundaries of a Test Paper\n\n"; // Outputs the title of the program.
	cout << "Please enter the grade of the paper\n"; // Asks the user to input the grade of the paper
	
	int grade; // Declaring variable for user input
	cin >> grade; // User inputs grade of the paper

	if (std::cin.fail()) // A cin.fail function (This executes if user enters a value that is not a number)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Please input numbers only\n";
	}

	else if (grade >= 70) { // Executed if user inputs a grade equal to or more than 70

		cout << "\nThe Grade of the Paper is: A\n";
		cout << "This student has done an excellent job in this subject!\n";

	}

	else if (grade >= 60 && grade <= 69) { // Executed if user inputs a grade within 60-69
		
		cout << "\nThe Grade of the Paper is: B\n";
		cout << "This student has done a good job in this subject!\n";

	}

	else if (grade >= 50 && grade <= 59) { // Executed if user inputs a grade within 50-59

		cout << "\nThe Grade of the Paper is: C\n";
		cout << "This student has done a satisfactory job in this subject!\n";

	}

	else if (grade >= 40 && grade <= 49) { // Executed if user inputs a grade within 40-49
		
		cout << "\nThe Grade of the Paper is: D\n";
		cout << "The student has done an unsatisfactory job in this subject.\n";

	}

	else { // Executed if user inputs a grade below 40

		cout << "\nThe Grade of the Paper is: F\n";
		cout << "The student has failed the subject.\n";

	}
	cin.get(); // Keeps the console window open
	return 0;
}