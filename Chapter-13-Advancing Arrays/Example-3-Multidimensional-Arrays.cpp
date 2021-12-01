#include <iostream>
#include <string>
using namespace std;

int main()
{
    string snacks[3][4] = { // Initializing a 2D Array with 3 rows and 4 columns

        {"Galaxy silk", "Mars Bar", "Snickers", "Bounty"}, // First row
        {"Flavored Youghurt", "Oman chips", "Oreo", "Lays" }, // Second Row
        {"Apple","Banana","Orange","Pear"} // Third Row
    };

    cout << snacks[1][2] << endl << endl; // Access Oreo

    for (int i = 0; i < 3; i++) { // Nested for loops to iterate through a 2D array
        for (int j = 0; j < 4; j++) {

            cout << snacks[i][j] << " ";
        }

        cout << endl;
    }
}