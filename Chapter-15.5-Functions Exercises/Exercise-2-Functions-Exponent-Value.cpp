#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string message(double number) {// Defining function

    while (cin.fail()) { // A cin.fail function, shows an error if user inputs anything than a number or a negative number
        cout << "Invalid input, please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }

    for (int i = 1; i <= 10; i++) { // A for loop that counts a variable from 1-10 in increments of 1
        cout << number << " raised to the power of " << i << " is: " << pow(number,i) << endl; // Outputs the exponent value from 1-10
        if (i == 10) { // If the counter reaches 10 then this will be executed
            return "\n--- The code is completed, thank you for using the program! ---\n"; // Returns a string statement
        }
    }
}


int main()
{
    cout << "Hello! This application will calculate the exponent value from 1-10 of a random number\n"; // Outputs the title of the program
    cout << "Please input a number that will be calculated to an exponent value from 1-10\n"; // Asks user for input
    double input; // Declaring variable for user input
    cin >> input; // User inputs number
    cout << message(input) << endl; // Outputs the function "message"

    cin.get(); // Keeps the console window open
    return 0;
}