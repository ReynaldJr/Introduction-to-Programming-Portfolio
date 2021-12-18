#include <iostream>
using namespace std;

double sumItems(double item1, double item2) { // Declaring function for the sum of two items

    double total = item1 + item2; // Formula for summing up two items
    return total; // Returning total to main function
}
int main()
{

    double myMoney = 40.00, shoes, tshirt; // Declaring variables
    cout << "You currently have " << myMoney << " AED in your pocket\n"; // Outputs how much money the user has

    cout << "How much is the shoes?\n"; // Asks user for input
    cin >> shoes; // User inputs the price for shoes
    cout << "How much is the t-shirt?\n"; // Asks user for input
    cin >> tshirt; // User inputs the price for t-shirts

    if (sumItems(shoes, tshirt) <= myMoney) { // If statement that determines if user can afford the items
        cout << "You can afford these items\n"; // Outputs if user can afford the items
    }
    else {
        cout << "Keep saving up!\n"; // Outputs if user can't afford the items
    }

    cin.get(); // Keeps console window open
    return 0;
}