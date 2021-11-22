#include <iostream>
using namespace std;

int main()
{
    for (int a = 0; a < 7; a++) { // Executing the outer loop 7 times

        for (int b = 0; b < 7; b++) { // Executing the inner loop 7 times

            cout << "*"; // Displaying the seven stars
        }

        cout << endl; // Line break for a new line
    }

    cin.get(); // Keeps the console window open
    return 0;
}
