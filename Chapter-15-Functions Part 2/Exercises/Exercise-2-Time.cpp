#include <iostream>
using namespace std;

string greetings(int time) { // Defining function

    while (cin.fail() || time < 0 || time > 24) { // Shows an error if user inputs anything that is not a number or a number less than 0 or more than 24
        cout << "Incorrect input, please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> time;
    }

    if (time < 12) { // Executes if time is equal to 0-11
        return "Good Morning";
    }

    else if (time >= 12 && time <= 17) { // Executes if time is equal to 12-17
        return "Good Afternoon";
    }

    else if (time >= 18 && time <= 21) { // Executes if time is equal to 18-21
        return "Good Evening";
    }

    else if (time >= 22 && time <= 24) { // Executes if time is equal to 22-24
        return "Good Night";
    }

}

int main()
{
    cout << "What time is it? (Please enter the time in 24-hour format)\n"; // Asks user for input
    int userInput; // Declaring variable for user input
    cin >> userInput; // User inputs time

    cout << greetings(userInput) << endl; // Outputs the string returned by the "greetings" function

    return 0;
}