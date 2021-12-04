#include <iostream>
using namespace std;

int main()
{
    int product, inputA, inputB; // Declaring variable for product formula and user input for both the number the user wants to see the table of and till what number the table sbould end

    cout << "Enter the number you want the table of\n"; // Asks user for input
    cin >> inputA; // User inputs the number they want to see the table of

    while (cin.fail()) { // A cin.fail function to display error if user enters wrong input
        cout << "Invalid input. Please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> inputA;

    }
    cout << "Enter till what number the table should end\n"; // Asks user for input
    cin >> inputB; // User inputs till what number the table should end

    while (cin.fail()) { // A cin.fail function to display error if user enters wrong input
        cout << "Invalid input. Please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> inputB;

    }

    for (int counter = 1; counter <= inputB; counter++) {  // A for loop for variable counter that counts from 1 up to until what the user inputted in variable inputB in increments of 1

        product = inputA * counter;  // Formula for product in multiplication 

        cout << inputA << "*" << counter << "=" << product << endl; // Outputs the table of the user input till 10
    }

    cin.get(); // Keeps the console window open
    return 0;
}