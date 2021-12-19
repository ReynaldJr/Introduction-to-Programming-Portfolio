#include <iostream>
#include <string>
using namespace std;

int main() {
	string password = "1234password";
	string userInput;

	
	cout << "Enter your Password" << endl;
	cin >> userInput;

	while (password != userInput) {
		cout << "Incorrect Password\n";
		cout << "Enter your Password" << endl;
		cin >> userInput;
	}

	cout << "Welcome to the super secure banking area" << endl;

}