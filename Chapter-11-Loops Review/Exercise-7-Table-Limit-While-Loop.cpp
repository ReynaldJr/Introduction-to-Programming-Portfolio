#include <iostream>
using namespace std;

int main()
{
    
    int input, product; // Declaring variable for product formula and user input
    cout << "Please input a number you wanna see the table of\n"; // Asks user for input
    cin >> input; // User inputs a number

    while (cin.fail()) {  // A cin.fail function to display error if user enters wrong input
        cout << "Invalid input. Please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> input;

    }
    
    int counter = 1; // Declaring variable for counter and initializing it with 1

    while (counter <= 10) { // If counter is less than 10 then the while loop will continue

        product = input * counter;  // Formula for product in multiplication table
        cout << input << "*" << counter << "=" << product << endl; // Outputs the table of the user input till 10
        counter++; // Increments the counter by 1
    }

    cin.get(); // Keeps the console window open
    return 0;
}