#include <iostream>
using namespace std;

int main()
{
    char input;
    cout << "Would you like to continue playing the game? Type Y for yes, or N for no\n";
    cin >> input;

    switch (input) {

    case 'Y':
    case 'y':

        cout << "Continuing the game...\n";
        break;

    case 'N':
    case 'n':

        cout << "Stopping the game...\n";
        break;

    default:
        cout << "Wrong input\n";


    }
    cin.get();
    return 0;
}


