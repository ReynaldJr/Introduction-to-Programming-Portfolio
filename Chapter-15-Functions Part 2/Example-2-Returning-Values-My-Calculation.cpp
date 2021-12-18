#include <iostream>
using namespace std;

int myCalculation(int num) {

    num *= 2;
    num += 8;
    return num;
}

int main()
{
    int userNum; // Declaring variable
    cout << "Enter a number: "; // Ask user for input
    cin >> userNum; // Assigns user to input to num var
    userNum = myCalculation(userNum); // Make userNum equal to value returned by function
    cout << userNum << endl; // Output userNum
    return 0;
}