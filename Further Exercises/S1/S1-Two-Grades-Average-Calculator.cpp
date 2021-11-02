#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "-- Welcome to the Grade Calculator! -- \n\n"; // Outputs the title of the program

    cout << "To get started, please input your full name\n"; // Outputs instructions for user to input their name.
    string name; // Declaring variable for user input
    getline(cin, name); // User inputs their name. Getline is used because cin itself cannot read spaces. Getline will read the input until the next line.

    cout << "Nice! How old are you then?\n"; // Outputs instructions for user to input their age
    int age; // Declaring variable for user input
    cin >> age; // User inputs their age

    if (cin.fail()) // a cin.fail function (If user inputs a letter or a special character, an error will be displayed.

    {
        cin.clear();
        cin.ignore();
        cout << "Please enter a number only\n";

    }

    else if (age < 0) { // Executes if age is less than 0

        cout << "Age can't be a negative number!\n"; // This message outputs if age is less than 0

    }

    else {

        cout << "Then, from 0-100, please input your grade for the first subject\n"; // Outputs instructions for user to input their grade for the first subject
        int grade1; // Declaring variable for user input
        cin >> grade1; // User inputs their grade.

        if (cin.fail()) // a cin.fail function (If user inputs a letter or a special character, an error will be displayed.

        {
            cin.clear();
            cin.ignore();
            cout << "Please enter a number only\n";

        }

        else {

            cout << "Then, from 0-100, please input your grade for the second subject\n"; // Outputs instructions for user to input their grade for the second subject
            int grade2; // Declaring variable for user input
            cin >> grade2; // User inputs their grade.


            if (cin.fail()) // a cin.fail function (If user inputs a letter or a special character, an error will be displayed.

            {
                cin.clear();
                cin.ignore();
                cout << "Please enter a number only\n";

            }

            else if (!cin.fail() && grade1 >= 0 && grade1 <= 100 && grade2 >= 0 && grade2 <= 100) { // If user inputs a value between 0-100 for both grades, this will be executed

                int average; // Declaring variable for average

                average = (grade1 + grade2) / 2; // Formula for average

                average = average / 10; // Since a switch statement can only read int values. This formula will be used. The comment below will tell the reason more about it in detail.

                /* Since int values only read the value before the decimal point, we can use this formula to our advantage.

                    For example, if the total average of both the subjects is 85. The formula above will divide it to 10. Resulting our value to be turned to 8.5

                    Once again, since int values only reads the value before the decimal point, the program will read the value to only 8.

                    As you can see in our switch statement, the value 8 fits into case 8 which is grade A.

                    The average 85 still fits to the criteria to be graded A even if the value itself has turned to 8.

                */

                switch (average) {

                case 10: // Case for 10
                case 9: // Case for 9
                case 8: // Case for 8
                case 7: // Case for 7

                {
                    cout << "The average of " << name << " (Age: " << age << ")" << " is A\n"; // This message displays if the value is between 7-10 (70-100)
                    cout << name << " has done an excellent job!\n"; // This message displays if the value is between 7-10 (70-100)
                    break; // Ends the case
                }

                case 6: // Case for 6
                {
                    cout << "The average of " << name << " (Age: " << age << ")" << " is B\n"; // This message displays if the value is 6 (60-69)
                    cout << name << " has done a good job!\n"; // This message displays if the value is 6 (60-69)
                    break; // Ends the case

                }

                case 5: // Case for 5
                {
                    cout << "The average of " << name << " (Age: " << age << ")" << " is C\n"; // This message displays if the value is 5 (50-59)
                    cout << name << " has done a satisfactory job!\n"; // This message displays if the value is 5 (50-59)
                    break; // Ends the case 
                }

                case 4: // Case for 4
                {
                    cout << "The average of " << name << " (Age: " << age << ")" << " is D\n"; // This message displays if the value is 4 (40-49)
                    cout << name << " has done an unsatisfactory job.\n"; // This message displays if the value is 4 (40-49)
                    break; // Ends the case
                }


                default: // Default Case
                {

                    cout << "The average of " << name << " (Age: " << age << ")" << " is F\n"; // This message displays if the value is less than 4 (0-39)
                    cout << name << " has failed.\n"; // This message displays if the value is less than 4 (0-39)
                }


                }

            }
            else {
                cout << "Invalid Input. Please input your numbers from 0-100 only.\n"; // This message displays if user inputs a number less than 0 or more than 100 for one of the grades
            }


        }
    }


    cin.get(); // Keeps the console window open
    return 0;

}
