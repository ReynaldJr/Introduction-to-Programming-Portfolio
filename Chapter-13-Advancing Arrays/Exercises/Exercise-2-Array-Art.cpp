#include <iostream>
using namespace std;

int main()
{
    char art[5][5] = {
        {'-', '-', '-', '-', '-'}, // First row
        {'-', '0', '-', '0', '-'}, // Second row
        {'-', '@', '@', '@', '-'}, // Third row
        {'-', '^', '^', '^', '-'}, // Fourth row
        {'-', 'v', 'v', 'v', '-'} // Fifth row

    };

    for (int i = 0; i < 5; i++) { // Iterating through the row loop
        for (int j = 0; j < 5; j++) { // Iterating through the column loop
            cout << art[i][j]; // Display the array art
        }

        cout << endl; // Line break to add another line to the console
    }

    cin.get(); // Keeps the console window open
    return 0;
}