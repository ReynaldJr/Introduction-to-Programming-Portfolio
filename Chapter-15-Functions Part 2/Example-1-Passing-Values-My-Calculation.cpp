#include <iostream>
using namespace std;

void myCalculation(int num) {

    num *= 2;
    num += 8;
    cout << num << endl;
}

int main()
{
    int userNum;
    cout << "Enter a number: ";
    cin >> userNum;
    myCalculation(userNum);

    return 0;
}