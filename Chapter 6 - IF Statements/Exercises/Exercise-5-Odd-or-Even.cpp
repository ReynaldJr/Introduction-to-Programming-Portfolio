#include <iostream>
using namespace std;

int main() {

    cout << "A Program to Check if The Number is Odd or Even!\n\n"; // Outputs the title of the program.

    int num; // Declares the integer num. 

    cout << "Enter an integer: \n"; // Outputs 'Enter an integer' to guide the user what to input.
    cin >> num; // User enters the number


    if (num % 2 == 0) { // A formula to check if the number is even or not. 

      // Basically, a number is divided to 2. If the remainder is 0, the number is even. If not, the number is odd.

        cout << num << " is even.\n";  // Displays that the number is even.

    }

    else {

        cout << num << " is odd.\n"; // Displays that the number is odd.
    }

    cin.get(); // Keeps the console window open
    return 0;

}
