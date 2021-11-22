#include <iostream>
using namespace std;

int main()
{
    
    int input, product;
    cout << "Please input a number you wanna see the table of\n";
    cin >> input;

    while (cin.fail()) {
        cout << "Invalid input. Please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> input;

    }
    
    int counter = 1;

    while (counter <= 10) {

        product = input * counter;
        cout << input << "*" << counter << "=" << product << endl;
        counter++;
    }
}

