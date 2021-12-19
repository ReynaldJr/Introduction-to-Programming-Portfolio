#include <iostream>
using namespace std;

int main()
{
    for (int x = 10; x >= 0; x--) { // A for loop that counts down from 10-0 in decrements of 1

        if (x == 0) { // If x is equal to 0 this will execute

            cout << "We have lift off!!\n"; // Prints a message instead of outputting the number 0
        }

        else { // If x is not equal to 0 this will execute

            cout << x << endl; // Prints the x from the for loop (counting down from 10 to 0)

        }
    }

    cin.get(); // Keeps the console window open
    return 0;
              
}