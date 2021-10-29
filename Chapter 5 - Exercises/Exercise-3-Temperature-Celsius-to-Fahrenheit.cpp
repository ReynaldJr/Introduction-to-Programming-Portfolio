#include <iostream>
using namespace std;


int main() {

	double F, C; // Declaring variables for Fahrenheit and Celsius

	cout << "Please enter a temperature in Celsius that will be converted to Fahrenheit" << endl; // Asks the user for input

	cin >> C; // User inputs the temperature in Celsius

	F = (C * 1.8) + 32; // Formula to convert from Celsius to Fahrenheit


	cout << C << " " << "Celsius" << " " << "is" << " " << F << " " << "in Fahrenheit."; // Outputs the temperature converted to Fahrenheit

	cin.get(); // Keeps the console window open
	return 0;


}