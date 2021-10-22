#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Welcome to the Grade Calculator!\n\n";

    cout << "To get started, please input your full name\n"; // Outputs instructions for user to input their name.
    string name; // Declaring variable for user input
    getline(cin, name); // User inputs their name. Getline is used because cin itself cannot read spaces. Getline will read the input until the next line.

    cout << "Then, from 0-100, please input your grade\n"; // Outputs instructions for user to input their grade
    int grade; // Declaring variable for user input
    cin >> grade; // User inputs their grade.

    if (std::cin.fail()) // A cin.fail function (If user inputs a letter or a special character, an error will be displayed.)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid Input. Please input numbers only\n";
    }

    else if (grade >= 0 && grade <= 100) { // If user inputs a value between 0-100, this will be executed

        grade = grade / 10; // Since a switch statement can only read int values. This formula will be used. The comment below will tell the reason more about it in detail.

        /* Since int values only read the value before the decimal point, we can use this formula to our advantage.
            
            For example, if a user inputs the grade to 85. The formula above will divide it to 10. Resulting our value to be turned to 8.5

            Once again, since int values only reads the value before the decimal point, the program will read the value to only 8.

            As you can see in our switch statement, the value 8 fits into case 8 which is grade A. 
            
            The grade 85 still fits to the criteria to be graded A even if the value itself has turned to 8. 

        */

        switch (grade) {
            
        case 10: // Case for 10
        case 9: // Case for 9
        case 8: // Case for 8
          
        {
            cout << "The grade of " << name << " is A\n"; // This message displays if the value is between 8-10 (80-100)
            cout << name << " has done an excellent job!\n"; // This message displays if the value is between 8-10 (80-100)
            break; // Ends the case
        }

        case 7: // Case for 7
        {
            cout << "The grade of " << name << " is B\n"; // This message displays if the value is 7 (70-79)
            cout << name << " has done a good job!\n"; // This message displays if the value is 7 (70-79)
            break; // Ends the case

        }

        case 6: // Case for 6
        {
            cout << "The grade of " << name << " is C\n"; // This message displays if the value is 6 (60-69)
            cout << name << " has done a satisfactory job!\n"; // This message displays if the value is 6 (60-69)
            break; // Ends the case 
        }

        case 5: // Case for 5
        {
            cout << "The grade of " << name << " is D\n"; // This message displays if the value is 5 (50-59)
            cout << name << " has done an unsatisfactory job.\n"; // This message displays if the value is 5 (50-59)
            break; // Ends the case
        }

        case 4: // Case for 4

        {
            cout << "The grade of " << name << " is E\n"; // This message displays if the value is 4 (40-49)
            cout << name << " has done a very unsatisfactory job.\n"; // This message displays if the value is 4 (40-49)
            break; // Ends the case
        }

        default: // Default Case
        {

            cout << "The grade of " << name << " is F\n"; // This message displays if the value is less than 4 (0-39)
            cout << name << " has failed.\n"; // This message displays if the value is less than 4 (0-39)
        }
        

        }

    }
    else {
        cout << "Invalid Input. Please input your numbers from 0-100 only.\n"; // This message displays if user inputs a number less than 0 or more than 100
    }

    cin.get(); // Keeps the console window open
    return 0;

}

