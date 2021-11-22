#include <iostream>
using namespace std;

int main()
{
    int product, inputA, inputB;

    cout << "Enter the number you want the table of\n";
    cin >> inputA;

    while (cin.fail()) {
        cout << "Invalid input. Please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> inputA;

    }
    cout << "Enter till what number the table should end\n";
    cin >> inputB;

    while (cin.fail()) {
        cout << "Invalid input. Please try again\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> inputB;

    }

    for (int counter = 1; counter <= inputB; counter++) {

        product = inputA * counter;

        cout << inputA << "*" << counter << "=" << product << endl;
    }
}
