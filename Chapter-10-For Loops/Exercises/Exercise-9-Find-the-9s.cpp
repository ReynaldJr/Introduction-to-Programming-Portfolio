#include <iostream>
using namespace std;

int main()
{
    int sum = 0; // Declaring and initializing the variable sum

    cout << "The numbers from 100-200 that are divisible from 9 are:\n\n"; // Prints what is going to output

    for (int a = 100; a <= 200; a++) { // For loop that counts from 100 - 200 in increments of 1

        if (a % 9 == 0) { // If the number is divisible by 9, this will execute

            cout << a << endl; // Outputs the numbers that are divisible by 9

            sum = a + sum; // Adds the number that is divisible by 9

        }
    }

    cout << "\n\nThe sum of all the numbers is: "; // Prints what is going to output
    cout << endl << sum << endl; // Prints the sum of the numbers from 100-200 that is divisible by 9

    cin.get(); // Keeps the console window open
    return 0;
}