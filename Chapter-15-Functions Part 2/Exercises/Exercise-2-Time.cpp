#include <iostream>
using namespace std;

string greetings(int time) {
    
    if(time < 12) {
       return "Good Morning";
    }

    else {
        return "Good Afternoon";
    }
}

int main()
{
    cout << "What time is it?\n";
    int userInput;
    cin >> userInput;

    cout << greetings(userInput) << endl;

    return 0;
}