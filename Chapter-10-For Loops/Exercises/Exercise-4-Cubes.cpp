#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a number you desire to see the cube of\n";
    int num;
    int result;

    cin >> num;

    for (int a = 1; a <= num; a++) {

        result = pow(a, 3);

        cout << "Number is: " << a << " and the cube of " << a << " is: " << result << endl;

    }
}

