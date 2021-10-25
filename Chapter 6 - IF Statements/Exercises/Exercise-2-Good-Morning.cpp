#include <iostream>
using namespace std;

int main() {

	int currentTime; // Declaring variable currentTime
	cout << "What is the current time? (in 24-hour format)\n"; // Asks the user for input
	cin >> currentTime; // User inputs his answer


	if (currentTime >= 12) { // If currentTime is greater than or equal to 12 this will be executed

		cout << "It's PM" << endl; // Outputs PM message

	}
	else { // If currentTime is less than 12 this will be executed

		cout << "It's AM" << endl; // Outputs AM message

	}

	cin.get(); // Keeps the console window open

	return 0;

}