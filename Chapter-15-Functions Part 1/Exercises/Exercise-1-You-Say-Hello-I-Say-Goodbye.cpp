#include <iostream>
using namespace std;

void welcome();
void goodbye();


int main()
{
    welcome();
    goodbye();
    return 0;
}

void welcome() {

    cout << "Welcome to my program\n";
}

void goodbye() {

    cout << "End of program\n";
}