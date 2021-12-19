#include <iostream>
using namespace std;

int main()
{
    int num = 108; // Declaring and initialising the variable for num

    while (num >= 9) { // While conditional check

        cout << num << "\n"; // Outputs the num 

        num = num - 9; // Minuses the num by 9 to create a reverse 9 times table with a loop

        
    }

    cin.get(); // Keeps the console window open
    return 0;

}

