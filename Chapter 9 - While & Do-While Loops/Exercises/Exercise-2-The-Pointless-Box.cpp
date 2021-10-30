#include <iostream>
using namespace std;

int main()
{
   
    cout << "Welcome to the Pointless Box!\n\n"; // Outputs the title
    cout << "To get started please enter a number of either 1 or 2.\n\n"; // Outputs the instructions for user input
    int number; // Declaring the variable for user input
    cin >> number; // User inputs a number

    while (number == 1 || number == 2 ) { // A while condition if user inputs number 1 or 2

        if (number == 1) { // Condition if user inputs number 1

            cout << "You have entered the number 1.\n"; // Outputs if user inputs a number 1
            
        }

        else { // Condition if user inputs number 2

            cout << "You have entered the number 2.\n"; // Outputs if user inputs a number 2
            
        }
        cout << "Please enter a number of either 1 or 2.\n"; // Asks the user for input
        cin >> number; // User inputs a number
        

        
    }

    cout << "Invalid Input.\n"; // If user inputs a number that is not 1 or 2, this will be printed. If the program was in a loop, the loop will stop and this message will be printed.
    cout << "Please enter a number of either 1 or 2 only.\n"; // If user inputs a number that is not 1 or 2, this will be printed. If the program was in a loop, the loop will stop and this message will be printed.

    cin.get(); // Keeps the console window open
    return 0;

}

