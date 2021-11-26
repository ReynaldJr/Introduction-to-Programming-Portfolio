#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++) { // Executes the outer loop 5 times
        for (int j = 1; j <= i; j++) { // Executes the inner loop 5 x 5 times
            cout << "*"; // Prints increasing lines of stars
        }
        cout << endl; // Prints a line break to the console
    }

    for (int a = 1; a < 5; a++) { // Executes the outer loop 4 times
        for (int b = a; b < 5; b++) { // Executes the inner loop 4 times

            cout << "*"; // Prints decreasing lines of stars
        }
           cout << endl; // Prints a line break to the console
    }

    cin.get(); // Keeps the console window open
    return 0;
}
