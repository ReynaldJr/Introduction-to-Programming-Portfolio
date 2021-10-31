#include <iostream>
using namespace std;

int main() {

    cout << "A Program to Calculate Profit or Loss\n\n"; // Outputs the title of the program.

    double purchase_price, sale_price;

    cout << "What is the purchase price of the item? \n"; // Outputs a question for purchase_price to guide the user what to input.
    cin >> purchase_price; // User enters the amount for sale_price

    cout << "What is the selling price of the item? \n"; // Outputs a question for sale_price to guide the user what to input.
    cin >> sale_price; // User enters the amount for sale_price.


    double result = sale_price - purchase_price; // A formula to calculate the result


    if (result < 0) { // If the result is less than 0, a loss incurred will be displayed.

        cout << "Loss Incurred = " << result;

    }


    else if (result == 0) { // If the result is equal to 0, a 'no profit nor loss' will be displayed.

        cout << "No Profit nor Loss.";

    }

    else { // If the result is greater than 0, a profit gained will be displayed.

        cout << "Profit Gained = " << result;

    }

    cin.get(); // Keeps the console window open
    return 0;

}
