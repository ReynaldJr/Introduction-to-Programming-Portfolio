#include <iostream>
using namespace std;

int main() {

	cout << "Enter your age" << endl;
	int age;
	cin >> age;

	while (cin.fail()) {
		cout << "Invalid Input.\nPlease enter a valid age:" << endl;

		cin.clear();

		cin.ignore(1000, '\n');
		cin >> age;
	}
	cout << "Your age is: " << age;

}