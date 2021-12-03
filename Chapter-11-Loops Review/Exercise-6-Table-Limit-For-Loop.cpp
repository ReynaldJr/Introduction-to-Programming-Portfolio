#include <iostream>
using namespace std;

int main()
{
    int product, input; // Declaring variable for product formula and user input
    cout << "Please input a number you want to see the table of\n"; // Asks user for input
    cin >> input; // User inputs a number

    while (cin.fail()) { // A cin.fail function to display error if user enters wrong input
        cout << "Invalid input. Please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> input;
    }

    for (int counter = 1; counter <= 10; counter++) { // A for loop for variable counter that counts from 1-10 in increments of 1

        product = input * counter; // Formula for product in multiplication 
        cout << input << "*" << counter << "=" << product << endl; // Outputs the table of the user input till 10
    }

    cin.get(); // Keeps the console window open
    return 0;
}