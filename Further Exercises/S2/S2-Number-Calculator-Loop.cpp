#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    cout << "-- Welcome to the Number Calculator! -- \n\n"; // Outputs the title of the program

    cout << "To get started, please input your full name\n"; // Outputs instructions for user to input their name.
    string name; // Declaring variable for user input
    getline(cin, name); // User inputs their name. Getline is used because cin itself cannot read spaces. Getline will read the input until the next line.

    cout << "\nHello " << name << ", please look at the contents below to guide you in this application\n"; // Outputs the user's name
    cout << "\nThe following contents will be displayed:\n1. Factorial\n2. Table from 50-40\n3. Exponent power from 5-0\n"; // Tells the user what contents are going to be outputted next
    cout << "\nOkay, it's time to input a number (Note: Please input a positive number only)\n"; // Asks user for input
    int input; // Declaring variable for user input
    cin >> input; // User inputs their number

    while (cin.fail() || input < 0) { // Shows an error if user enters a letter that is not a number or a negative number (NOTE: factorial can't solve negative numbers)
        cout << "Invalid input, please try again!\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> input;
    }

    int factorial = 1; // Declaring variable for factorial

    
    for (int counter = 1; counter <= input; counter++) { // For loop that counts from 1 until the user input in increments of 1

        factorial = factorial * counter; // Formula for factorial

    }

    cout << "\nThe factorial of " << input << " is " << factorial << endl; // Outputs the factorial

    cout << "\nThe content below shows the number " << input << "'s table from 50 - 40\n\n"; // Tells the user what is going to output next

    int counter2 = 50, product; // Declaring variable for the second counter for table which starts from 50 and the product variable

    while (counter2 >= 40) { // While loop executes while number is more than or equal to 40

        product = input * counter2; // Formula for product
        cout << input << " * " << counter2 << " = " << product << endl; // Outputs the table of the user input from 50-40
        counter2--; // Decrements the counter until 40
    }

    cout << "\nThe content below shows the number " << input << "'s exponent power from 5 - 0\n\n"; // Tells the user what is going to output next

    int counter3 = 5; // Declaring variable for the third counter for exponent power which starts from 5

    do { // Do while loop makes sure that the statement below will execute at least once

        cout << input << " ^ " << counter3 << " = " << pow(input, counter3) << endl; // Outputs the power of the number from 5-0
        counter3--; // Decrements the counter
       
    } while (counter3 >= 0); // While loop that executes until the counter variable reaches 0

    cin.get(); // Keeps the console window open
    return 0;
}