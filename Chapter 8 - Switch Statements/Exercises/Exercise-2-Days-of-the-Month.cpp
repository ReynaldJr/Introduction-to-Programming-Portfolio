#include <iostream>
using namespace std;

int main() {
	
		cout << "This Program Will Check How Many Days Are There in a Month.\n"; //Outputs the title of the program.
		cout << "Please enter the number that corresponds to the month you want to see the days of.\n"; // Asks the user for the input.

		cout << " 1. January\n 2. February\n 3. March\n 4. April\n 5. May\n 6. June\n 7. July\n 8. August\n 9. September\n 10. October \n 11. November\n 12. December\n\n"; // Instructions for the user on what they should input.
		int input; // Declaring the variable for the user input.
		cin >> input; // Gets the user input.

		switch (input) { // Evaluates the expression for input using switch.

		case 1: // Case for January
		{	
			cout << "\nJanuary has 31 days.\n";  // This message prints if the user enters 1.
			break; // Ends the case.
		}

		case 2: // Case for February.
		{
			cout << "\nFebruary has 28 days or 29 days in a leap year\n"; // This message prints if the user enters 2.
			break; // Ends the case.
		}

		case 3: // Case for March
		{
			cout << "\nMarch has 31 days\n"; // This message prints if the user enters 3.
			break; // Ends the case.
		}

		case 4: // Case for April
		{
			cout << "\nApril has 30 days\n"; // This message prints if the user enters 4.
			break; // Ends the case.
		}

		case 5: // Case for May
		{
			cout << "\nMay has 31 days\n"; // This message prints if the user enters 5.
			break; // Ends the case.
		}

		case 6: // Case for June
		{
			cout << "\nJune has 30 days\n"; // This message prints if the user enters 6.
			break; // Ends the case.
		}

		case 7: // Case for July
		{
			cout << "\nJuly has 31 days\n"; // This message prints if the user enters 7.
			break; // Ends the case.
		}

		case 8: // Case for August
		{
			cout << "\nAugust has 31 days\n"; // This message prints if the user enters 8.
			break; // Ends the case.
		}

		case 9: // Case for September
		{
			cout << "\nSeptember has 30 days\n"; // This message prints if the user enters 9.
			break; // Ends the case.
		}
		case 10: // Case for October
		{
			cout << "\nOctober has 31 days\n"; // This message prints if the user enters 10.
			break; // Ends the case.
		}

		case 11: // Case for November
		{
			cout << "\nNovember has 30 days\n"; // This message prints if the user enters 11.
			break; // Ends the case.
		}

		case 12: // Case for December
		{
			cout << "\nDecember has 31 days\n"; // This message prints if the user enters 12.
			break; // Ends the case/
		}
		default: // Default case
		{
			cout << "\nInvalid Input\n"; // This message prints if the user doesn't enter a number from 1-12.
			cout << "Please input a number from 1-12 only.\n"; // This message prints if the user doesn't enter a number from 1-12.
		}

		}

		cin.get(); // Keeps the console window open.
		return 0;
	}
