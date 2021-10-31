#include <iostream>
using namespace std;

int main() {

	int currentTime; // Declaring variable for user input
	cout << "What is the current time? (in 24-hour format)\n"; // Asks user for input
	cin >> currentTime; // User inputs the currentTime


	if (currentTime < 12) { // Executed if user inputs a number less than 12

		cout << "Good Morning" << endl; // This message outputs if user inputs a number less than 12

	}
	else if (currentTime < 18) { // Executed if user inputs a number less than 18

		cout << "Good Afternoon" << endl; // This message outputs if user inputs a number less than 18

	}
	else if (currentTime < 21) { // Executed if user inputs a number less than 21
		cout << "Good Evening" << endl; // This message outputs if user inputs a number less than 21

	}
	else if (currentTime <= 24) { // Executed if user inputs a number less than 24
		cout << "Good Night" << endl; // This message outputs if user inputs a number less than 21

	}
	else { // Executed if user inputs a number more than 24
		cout << "Time notValid";

	}

	cin.get(); // Keeps the console window open

	return 0;

}