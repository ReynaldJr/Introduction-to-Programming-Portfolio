#include <iostream>
using namespace std;

int main() {

    cout << "A Program to Check if The Number is Positive, Negative, or Zero!\n\n"; // Outputs the title of the program.

    double num;

    cout << "Enter a Number: \n"; // Outputs 'Enter a Number' to guide the user what to input.
    cin >> num; // User enters the number


    if (num < 0) { // Checks if the number is less than 0.

        cout << num << " is negative.\n"; // If number is less than 0, the program displays that the number is negative.

    }

    else if (num == 0) { // Checks if the number is equal to 0.

        cout << num << " is zero.\n"; // If number is equal to 0, the program displays that the number is zero.
    }

    else { // Checks if the number is greater than 0.

        cout << num << " is positive.\n"; // If number is greater than 0, the program displays that the number is positive.
    }

    cin.get(); // Keeps the console window open
    return 0;

}
