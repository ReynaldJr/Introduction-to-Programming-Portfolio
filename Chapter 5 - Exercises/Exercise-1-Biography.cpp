#include <iostream>
#include <string>

using namespace std;


int main() {

	string name, hometown, age; // Declaring variables name, hometown, and age

	cout << "Input your name" << endl; // Asks user to input their name
	cin >> name; // User inputs name

	cout << "Input your hometown" << endl; // Asks user to input their hometown
	cin >> hometown; // User inputs hometown

	cout << "Input your age" << endl; // Asks user to input their age
	cin >> age; // User inputs age



	cout << "Your name is " << name << endl; // Outputs the user's name
	cout << "Your hometown is " << hometown << endl; // Outputs the user's hometown
	cout << "Your age is " << age << endl; // Outputs the user's age

	cin.get(); // Keeps the console window open
	return 0;
}