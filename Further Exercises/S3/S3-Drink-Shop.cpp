#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void DisplayMenu(string CoffeeType[], string TeaType[], double Price[]) { // Void function to display the menu of the shop

    cout << "\n\n\n\t========== WELCOME TO REYNALD'S DRINK SHOP! ==========\n\n";
    cout << "\t\t\t====== MENU ======\n";
    cout << "\n\n  Coffee\t\tPrice\t\t Tea\t\t\tPrice";

    for (int i = 0; i < 3; i++) { // A for loop that iterates through the arrays in the main function to display them in the menu.  Setw function and left/right is used to arrange the menu into a table
        cout << "\n\n  " << left << setw(22) << CoffeeType[i] << Price[i] << " AED" << right << setw(12) << " " << left << setw(23) << TeaType[i] << Price[i] << " AED" << endl;

    }
}

void DrinkTypeMenu(char DrinkType, string CoffeeType[], string TeaType[], double Price[]) { // Void function to display the menu of Coffee/Tea Types

        switch (DrinkType) {
        case 'c': // Case for Coffee (If user inputted C)
        case 'C':
            cout << "\n\n\t\t========== COFFEE TYPES! ==========\n\n";
            cout << "\t\t    Coffee\t\tPrice";
            for (int i = 0; i < 3; i++) { // A for loop that iterates through the CoffeeType and Price arrays in the main function to display them in the menu.  Setw function and left is used to arrange the menu into a table
                cout << "\n\n\t\t    [" << i + 1 << "] " << left << setw(16) << CoffeeType[i] << Price[i] << " AED\n";

            }
            break;

        case 't': // Case for Tea (If user inputted T)
        case 'T':

            cout << "\n\n\t\t   ========== TEA TYPES! ==========\n\n";
            cout << "\t\t    Tea\t\t\tPrice";
            for (int i = 0; i < 3; i++) {  // A for loop that iterates through the TeaType and Price arrays in the main function to display them in the menu.  Setw function and left is used to arrange the menu into a table
                cout << "\n\n\t\t    [" << i + 1 << "] " << left << setw(16) << TeaType[i] << Price[i] << " AED\n";
            }
            break;
        }

}

bool SugarValidity(char Agreement) { // Bool function to check if the user wants sugar or not

    bool Sugar = false; // Initializing Sugar with false

    switch (Agreement) {
    case 'y': // Case for Y (if User inputs Y)
    case 'Y':
        Sugar = true; // If user inputs Y, then the sugar will be set to true
        break;
    }

    return Sugar;
}

void ItemsOrdered(string CoffeeType[], string TeaType[], double Price[], int TypeCoffeeTea, char DrinkType, char Sugar) { // Void function to display the items ordered by the user

    TypeCoffeeTea--; // Decrementing the variable to fit in with the index of the arrays 

    switch (DrinkType) {
    case 'c': // Case for Coffee (If user inputted C)
    case 'C':
        cout << "\t\t\t" << left << setw(16) << CoffeeType[TypeCoffeeTea] << Price[TypeCoffeeTea] << " AED\n\n";   // A for loop that iterates through the CoffeeType and Price arrays in the main function to display them in the menu.  Setw function and left is used to arrange the menu into a table
        break; 
    case 't': // Case for Tea (If user inputted T)
    case 'T':
        cout << "\t\t\t" << left << setw(16) << TeaType[TypeCoffeeTea] << Price[TypeCoffeeTea] << " AED\n\n";  // A for loop that iterates through the TeaType and Price arrays in the main function to display them in the menu.  Setw function and left is used to arrange the menu into a table
        break;
    }

    if (SugarValidity(Sugar) == 1) { // If the user agreed to have sugar then this will be executed
        cout << "\t\t\t" << left << setw(16) << "Sugar" << "1 AED\n\n"; // Outputs the sugar and its price in the items ordered
    }

}

double TotalCost(double Price[], int TypeCoffeeTea, char Sugar) { // A function that returns the total cost of the items ordered
    TypeCoffeeTea--; // Decrementing the variable to fit in with the index of the arrays 

    double TotalAmount = Price[TypeCoffeeTea]; // Assigning the total amount to the price of the coffee/tea they ordered depending on the index of the price array

    if (SugarValidity(Sugar) == true) { // If sugar is true then this will be executed
        TotalAmount++; // Incrementing the total amount with 1, since the sugar charges 1 AED
    }

    return TotalAmount;

}

void Payment(double Price[], int CoffeeTeaType, char Sugar, double UserMoney) { // Void function to display the payment made by the user

    double Change = UserMoney - TotalCost(Price, CoffeeTeaType, Sugar); // Formula for change

    if (Change < 0) { // If change is a negative number then this will be executed
        cout << "\nYOU DON'T HAVE ENOUGH MONEY TO PURCHASE THE ITEMS\n\n"; // Tells the user that they don't have enough money
        cout << "ORDER HAS BEEN CANCELLED"; // Tells user that the order has been canceled

        if (UserMoney > 0) { // If user's money is more than 0 then this will be executed
            cout << " AND YOUR MONEY HAS BEEN REFUNDED BACK"; // Tells the user that their money has been refunded
        }
    }

    else { // If change is more than and equal to 0 then this will be executed
        cout << "\nCHANGE: " << Change << " AED\n\n"; // Outputs the change
        cout << "ENJOY YOUR DRINK!"; // Tells the user a message to enjoy their order

    }
}

int main()

{
    
    string CoffeeType[] = { "Ice Coffee", "Milk Coffee", "Black Coffee" }; // Array for the three types of coffee
    string TeaType[] = { "Ice Tea", "Milk Tea", "Black Tea" }; // Array for the three types of tea
    double Price[] = { 3, 2, 1 }; // Array for the three different prices

    string DrinkType, SugarResponse; // String variable to check for user response for the type of drink they want and if they want sugar or not
    char DrinkTypeSwitch, SugarChar; // Variables that will be used for the conversion from string to char for switch statements
    int CoffeeTeaType; // Variable for user response on the type of coffee/tea they want depending on the number they input
    double UserMoney; // Variable to get the user input for their money

    DisplayMenu(CoffeeType, TeaType, Price); // Calls the function to display the current menu
    
        cout << "\n\t=====================================================\n";

        cout << "\n\nDO YOU WANT TO ORDER COFFEE OR TEA? (TYPE C IF COFFEE | TYPE T IF TEA): "; // Asks user for input
        getline(cin, DrinkType); // User inputs their response, getline is used to check for spaces
        while (DrinkType != "C" && DrinkType != "c" && DrinkType != "T" && DrinkType != "t") { // If user doesn't input the following: C,c,T,t then an error will be shown
            cout << "INVALID INPUT, PLEASE TRY AGAIN\n";
            cout << "DO YOU WANT TO ORDER COFFEE OR TEA? (TYPE C IF COFFEE | TYPE T IF TEA): ";
            cin.clear();
            getline(cin, DrinkType);
        }

        DrinkTypeSwitch = DrinkType.at(0); // Initializes the char variable with the first character of the string
        DrinkTypeMenu(DrinkTypeSwitch, CoffeeType, TeaType, Price); // Calls for the function to display the menu for Coffee or Tea depending on user input

        cout << "\n\t=====================================================\n";
        cout << "\n\nWHAT TYPE OF DRINK DO YOU WANT? (TYPE THE NUMBER CORRESPONDING TO THE DRINK): "; // Asks user for input
        cin >> CoffeeTeaType; // User inputs their response
        while (cin.fail() || CoffeeTeaType < 1 || CoffeeTeaType > 3) { // If user inputs anything that is not a number, if the number is more than 3 , or less than 1, then an error will be shown 
            cout << "INVALID INPUT, PLEASE TRY AGAIN\n";
            cout << "WHAT TYPE OF DRINK DO YOU WANT? (TYPE THE NUMBER CORRESPONDING TO THE DRINK): ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> CoffeeTeaType;
        }
        
        cin.ignore(); // Previous input leaves a newline (\n) in the program; when getline is used after this, it will see the newline character as a whitespace and halts reading further; cin.ignore() overcomes this problem.

        cout << "\n\nDO YOU WANT SUGAR IN YOUR DRINK? - 1 AED CHARGE (TYPE Y IF YES | TYPE N IF NO): "; // Asks user for input
        getline(cin, SugarResponse); // User inputs their response, getline is used to check for spaces
        while (SugarResponse != "Y" && SugarResponse != "y" && SugarResponse != "N" && SugarResponse != "n") { // If user doesn't input the following: Y,y,N,n then an error will be shown
            cout << "INVALID INPUT, PLEASE TRY AGAIN\n";
            cout << "DO YOU WANT SUGAR IN YOUR DRINK? - 1 AED CHARGE (TYPE Y IF YES | TYPE N IF NO): ";
            cin.clear();
            getline(cin, SugarResponse);
        }

        SugarChar = SugarResponse.at(0); // Initializes the char variable with the first character of the string
  
        cout << "\n\n\t\t========== THINGS ORDERED! ==========\n\n";
        ItemsOrdered(CoffeeType, TeaType, Price, CoffeeTeaType, DrinkTypeSwitch, SugarChar); // Calls the function to display the user's current orders
        cout << "\t=====================================================\n";
        cout << "\n\nTOTAL COST: " << TotalCost(Price, CoffeeTeaType, SugarChar) << " AED\n\n"; // Outputs the total cost of the current orders
        cout << "TYPE IN THE MONEY FOR PAYMENT (AED): "; // Asks user for input
        cin >> UserMoney; // User inputs their response
        while (cin.fail() || UserMoney < 0) { // If user inputs anything that is not a number or if the number is negative, then an error will be shown
            cout << "INVALID INPUT, PLEASE TRY AGAIN\n";
            cout << "TYPE IN THE MONEY FOR PAYMENT (AED): ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> UserMoney;
        }
        Payment(Price, CoffeeTeaType, SugarChar, UserMoney);  // Calls the function to display either the change of the user or the cancellation of the order (if the user doesn't have enough money to buy the orders)

        cout << "\n\n\t=====================================================\n";
        cout << "\n\t    THANK YOU FOR COMING TO REYNALD'S DRINK SHOP!\n\n";
        cout << "\t=====================================================\n";

        cin.get(); // Keeps the console window open
        return 0;
}