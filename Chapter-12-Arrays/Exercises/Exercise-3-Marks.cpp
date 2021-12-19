#include <iostream>
using namespace std;

int main()
{
    cout << "Average of 5 Marks Calculator\n"; // Outputs title of program

    int grades[5]; // Declaring variable for user input
    double sum = 0, average = 0; // Declaring and initializing variable for sum and average


    for (int i = 0; i < 5; i++) { // For loop that counts a variable from 0 to 4 in increments of 1
        cout << "Please enter the mark for subject " << i+1 << endl; // Asks user for input
        cin >> grades[i]; // User inputs mark 5 times

        while (cin.fail() || grades[i] < 0 || grades[i] > 100) { // An error will be shown if user inputs anything that isn't a number or if the number is a negative or more than 100
            cout << "Invalid input, please try again!\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> grades[i];
            }
        sum = sum + grades[i]; // Formula for sum


    }

    average = sum / 5; // Formula for average

    cout << "Your average is " << average << endl; // Outputs the average

    cin.get(); // Keeps the console window open
    return 0;

}