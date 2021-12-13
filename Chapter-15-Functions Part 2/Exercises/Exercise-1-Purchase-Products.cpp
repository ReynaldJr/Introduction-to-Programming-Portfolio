#include <iostream>
using namespace std;

double sumItems(double item1, double item2) {

    double total = item1 + item2;
    return total;
}
int main()
{

    double myMoney = 40.00, shoes, tshirt;
    cout << "You currently have " << myMoney << " AED in your pocket\n";

    cout << "How much is the shoes?\n";
    cin >> shoes;
    cout << "How much is the tshirt?\n";
    cin >> tshirt;

    if (sumItems(shoes, tshirt) <= myMoney) {
        cout << "You can afford these items\n";
    }
    else {
        cout << "Keep saving up!\n";
    }
}