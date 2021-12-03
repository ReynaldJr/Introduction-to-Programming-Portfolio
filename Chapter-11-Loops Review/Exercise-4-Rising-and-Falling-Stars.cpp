#include <iostream>
using namespace std;

int main()
{
    int a = 1; // Variable a to iterate the outer loop
    while (a <= 5) { // Iterates the outer loop 5 times
        int b = a; // Variable b to iterate the inner loop
        while (b <= 5) { // Iterates the inner loop 5 times
            cout << "*"; // Displays the falling stars from 5 to 1
            b++; // Increments the inner loop by 1
        }
        cout << endl; // Line break 
        a++; // Increments the outer loop by 1
    }

    int i = 1; // Variable i to iterate the outer loop
    while (i <= 5) { // Iterates the outer loop 5 times
        int j = 1; // Variable j to iterate the inner loop
        while (j <= i) { // Iterates the inner loop 5 times (based on the outer loop)
            cout << "*"; // Displays the rising stars from 1 to 5
            j++; // Increments the inner loop by 1
        }

        cout << endl; // Line break 
        i++; // Increments the outer loop by 1
    }

    cin.get(); // Keeps the console window open
    return 0;
}