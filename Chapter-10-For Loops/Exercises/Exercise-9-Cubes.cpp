#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter until what number you want to see the cube of\n"; // Asks the user for input
    int num; // Declaring variable for user input
    cin >> num; // User inputs their input

    while (cin.fail() || num < 1) { // A cin.fail function loop if user inputs a letter or a special character. Also an error if user inputs a letter less than 1
        cout << "Invalid input, please enter the number again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> num;
    }

    for (int a = 1; a <= num; a++) { // A for loop to do that counts the variable from 1 until to what the user input for their number

        cout << "Number is: " << a << " and the cube of " << a << " is: "; // Outputs the number the user has input

        int counter = a; // A counter that will be used for the cube formula

        int result = counter * counter * counter; // A formula for the cube 

        cout << result << endl; // Outputs the result 
    }

    cin.get(); // Keeps the console window open
    return 0;
}