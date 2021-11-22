#include <iostream>
using namespace std;

int main()
{
    int product, input;
    cout << "Please input a number you want to see the table of\n";
    cin >> input;

    while (cin.fail()) {
        cout << "Invalid input. Please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> input;
    }

    for (int counter = 1; counter <= 10; counter++) {

        product = input * counter;
        cout << input << "*" << counter << "=" << product << endl;
    }
}
