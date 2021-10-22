#include <iostream>
using namespace std;

int main()
{
    char input; //Declaring the variable for input.
    cout << "Would you like to continue playing the game?\n"; //Prints the message that asks the user for input.
    cout << "\nPlease type Y if yes, or N for no.\n";  //Prints the instructions of what the user should input
    cin >> input; // Gets the user input.

    switch (input) { //Evaluating the expression using switch.

    case 'Y': // Case for uppercase Y.
    case 'y': // Case for lowercase y.
    {
        cout << "You have chosen yes.\n"; //Prints message if user inputs Y.
        cout << "Continuing the game...\n"; //Prints message if user inputs Y.

        break; //Ends the case
    }
    case 'N': // Case for uppercase N.
    case 'n': // Case for lowercase n.
    {
        cout << "You have chosen no.\n"; //Prints message if user inputs N.
        cout << "Stopping the game...\n"; //Prints message if user inputs N.

        break; //Ends the case
    }
    default: //Default case

    {
        cout << "Incorrect input\n"; //Prints message if user inputs neither Y or N.
        cout << "Please type either Y or N.\n"; //Prints message if user inputs neither Y or N.
    }

    }
    cin.get(); // Keeps the console window open.
    return 0;
}

