#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int a = 1; a <= 4; a++) {
        

        for (int b = a; b <= 4; b++) {

            cout << "*";
        }


           cout << endl;

    }
}


