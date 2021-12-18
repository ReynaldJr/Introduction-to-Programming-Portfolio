#include <iostream>
using namespace std;

void myCalculation(int num) {

    num *= 2;
    num += 8;
    cout << num << endl;
}

int main()
{
    int userNum; // Create an int variable
    cout << "Enter a number: "; // Asks user for input
    cin >> userNum; // User inputs a number
    myCalculation(userNum); // Calls the function and pass in num as parameter argument

    return 0;
}