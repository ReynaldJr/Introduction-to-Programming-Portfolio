#include <iostream>
using namespace std;

int main()
{
    char input; 
    cout << "Would you like to continue playing the game?\n"; 
    cout << "\nPlease type Y if yes, or N for no.\n";  
    cin >> input; 

    switch (input) 
    {

    case 'Y': 
    case 'y': 
    {   
        cout << "You have chosen yes.\n"; 
        cout << "Continuing the game...\n"; 

        break; 
    }
    case 'N':
    case 'n': 
    {
        cout << "You have chosen no.\n"; 
        cout << "Stopping the game...\n"; 

        break; 
    }
    default: 
    {
        cout << "Incorrect input\n"; 
        cout << "Please type either Y or N.\n"; 

    }
    cin.get();
    return 0;
}

