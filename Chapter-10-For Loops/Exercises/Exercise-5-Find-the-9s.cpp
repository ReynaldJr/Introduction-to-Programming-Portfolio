#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    cout << "The numbers from 100-200 that are divisible from 9 are:\n\n";
    for (int a = 100; a <= 200; a++) {

        if (a % 9 == 0) {

            cout << a << endl;

            sum = a + sum;

        }
    }

    cout << "\n\nThe sum of all the numbers is: ";
    cout << endl << sum << endl;
}
