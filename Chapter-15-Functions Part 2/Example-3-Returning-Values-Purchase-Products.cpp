#include <iostream>
using namespace std;

double sumItems(double item1, double item2) { // Defining function

    double total = item1 + item2; // Calculate total cost of items
    return total; // Returns total to the main function
}
int main()
{
    double myMoney = 40.00;
    double shoes = 25.99;
    double tshirt = 11.50;

    if (sumItems(shoes, tshirt) <= myMoney) { // Determines if you can afford the item
        cout << "You can afford these items\n";
    }
    else {
        cout << "Keep saving up!\n";
    }
}