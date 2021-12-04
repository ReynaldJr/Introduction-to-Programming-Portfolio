#include <iostream>
using namespace std;

int main()
{
    int a = 0, sum = 0; // Declaring and initializing variable a for counting, and sum to both 0;
    cout << "The numbers between 0-200 that are divisible by 9 are\n"; // Tells the user the things that are going to be outputted next

    do {

        if (a % 9 == 0) { // If the numbers from 0-200 are divisible by 9, this will execute

            cout << a << endl; // Outputs the numbers that are divisible by 9

            sum = sum + a; // Formula to add all the numbers divisible by 9
        }

        a++; // Incrementing a by 1

    } while (a <= 200); // While loop that executes until 200

    cout << "\nThe sum of all the numbers between 0-200 that are divisible by 9 is: " << sum << endl; // Outputs the sum 

    cin.get(); // Keeps the console window open
    return 0;
}