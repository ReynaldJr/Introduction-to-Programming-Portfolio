#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int sum = 0;
    cout << "The numbers between 0-200 that are divisible by 9 are\n";

    do {
        if (a % 9 == 0) {

            cout << a << endl;

            sum = sum + a;
        }

        a++;

    } while (a <= 200);

    cout << "\nThe sum of all the numbers between 0-200 that are divisible by 9 is: " << sum << endl;
}
