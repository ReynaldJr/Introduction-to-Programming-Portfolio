#include <iostream>
using namespace std;

int main()
{
    string myWord = "ARSH"; // Declaring string variable "ARSH"

    for (int a = 0; a <= 3; a++) { // For loop that counts numbers from 0-3 with increments of 1

        cout << myWord.at(a) << endl; // Prints the individual letter of the string depending of the increment of the for loop
    }

    cin.get(); // Keeps the console window open
    return 0;

}
