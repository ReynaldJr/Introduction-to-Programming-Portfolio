#include <iostream>
using namespace std;


int main() {

	double F, C; // Declaring variables for Fahrenheit and Celsius

	cout << "Please enter the a temperature in Fahrenheit that will be converted to Celsius" << endl; // Asks the user for input
	cin >> F; // User inputs the temperature in Fahrenheit

	C = (F - 32) * (0.556); // Formula to convert from Fahrenheit to Celsius


	cout << F << " " << "Fahrenheit" << " " << "is" << " " << C << " " << "in Celsius."; // Outputs the temperature converted to Celsius

	cin.get(); // Keeps the console window open
	return 0;



}