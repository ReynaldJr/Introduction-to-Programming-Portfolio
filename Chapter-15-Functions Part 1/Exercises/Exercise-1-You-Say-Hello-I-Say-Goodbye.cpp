#include <iostream>
using namespace std;

void welcome(); // Declaring function
void goodbye(); // Declaring function


int main()
{
    welcome(); // Calls a function
    goodbye(); // Calls a function

    cin.get(); // Keeps the console window open
    return 0;
}

void welcome() { // Defining function

    cout << "Welcome to my program\n";
}

void goodbye() { // Defining function

    cout << "End of program\n";
}