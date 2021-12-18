#include <iostream>
using namespace std;

string greetings(int time) { /* Return type set to string as this function will return a string value back
to main program */
    
    if(time < 12) {
       return "Good Morning";
    }

    else {
        return "Good Afternoon";
    }
}

int main()
{
    cout << "What time is it?\n"; // Asks user for time
    int userInput; // Declaring variable for user input
    cin >> userInput; // User inputs time

    cout << greetings(userInput) << endl; // Outputs string returned by function

    return 0;
}