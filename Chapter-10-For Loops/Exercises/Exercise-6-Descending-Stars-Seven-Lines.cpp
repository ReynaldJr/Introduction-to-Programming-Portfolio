#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 7; i++) { // Executes the outer loop 7 times
        for (int j = i; j <= 7; j++) { // Executes the inner loop 7 times
            cout << "*"; // Print reducing the lines of stars
        }
        cout << endl; // Print a line break to the console
    }

    cin.get(); // Keeps the console window open
    return 0;
}