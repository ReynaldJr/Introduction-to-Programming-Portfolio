#include <iostream>
using namespace std;

int main() {

	int age; // Declaring variable for user input
	cout << "How old you are you?\n"; // Asks the user for input
	cin >> age; // User inputs their age


	if (age >= 18) { // If input is more than or equal to 18, this will execute

		cout << "Can vote!" << endl; // Outputs if input is equal to or more than 18

	}
	else { // If input is less than 18, this will execute

		cout << "Can't vote." << endl; // Outputs if input is less than 18

	}

	cin.get(); // Keeps the console window open

	return 0;

}