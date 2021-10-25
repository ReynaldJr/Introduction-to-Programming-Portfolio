#include <iostream>
using namespace std;

int main() {

	bool myBirthday = true; // Declaring and initializing a bool variable at true
	int age = 18; // Declaring and initializing a integer variable with 18

	if (myBirthday == true) { // If the variable myBirthday is true, this will execute

		age++; // Incrementing the variable age (add 1)

		cout << "It is my birthday. I am " << age << " years old"; // if myBirthday is true, this message will output

	}
	else { // If the variable myBirthday is false, this will execute

		cout << "It is not my birthday" << endl; // if myBirthday is false, this message will output
	}

	cin.get(); // Keeps the console window open
	return 0;
}