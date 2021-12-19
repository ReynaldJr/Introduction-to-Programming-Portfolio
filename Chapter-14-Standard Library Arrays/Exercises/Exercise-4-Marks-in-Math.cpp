#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Welcome to the Math Marks Calculator!\n"; // Outputs the title of the program-
    cout << "\nThe following things will be displayed:\n1.Highest Marks\n2.Lowest Marks\n3.Average Marks\n\n"; // Outputs what will be outputted next

    cout << "To get started please input the marks of each of the 20 students (Marks: 0-100)\n\n"; // Asks the user what they should input

    array<int, 20> marks; // Declaring variable for user input

    for (int i = 0; i < 20; i++) { // For loop that counts the variable 0 to 19 in increments of 1

        cout << "Please input the marks in Math for student " << i+1 << ": "; //  User inputs the marks of each student individually
        cin >> marks[i]; // User inputs mark 20 times
        
        while (cin.fail() || marks[i] < 0 || marks[i] > 100) { // A cin.fail function which will show an error if user inputs anything other than a number or if the number is a negative or more than a hundred
            cout << "Invalid input, please try again!\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cin >> marks[i];
        }
    }

    cout << "\nThe following contents showcases the marks of the 20 students in Math\n\n"; // Outputs what will be outputted next

    for (int j = 0; j < 20; j++) { // For loop that will output all the grades of each student

        cout << "Student " << j + 1 << ": " << marks[j] << endl;

    }

    int highest = marks[0], lowest = marks[0]; // Declaring and initializing the variables for the highest and lowest marks

    for (int x = 0; x < 20; x++) { // A for loop that will check the highest mark in Math

        if (marks[x] > highest) {

            highest = marks[x];
        }
    }

    cout << "\nThe highest mark in Math is: " << highest << endl; // Outputs the highest mark in Math

    for (int y = 0; y < 20; y++) { // A for loop that will check the lowest mark in Math

        if (marks[y] < lowest) {

            lowest = marks[y];
        }
    }

    cout << "\nThe lowest mark in Math is: " << lowest << endl; // Outputs the lowest mark in Math

    cout << "\n\nThe following contents showcases the lowest to highest marks of the 20 students in Math\n\n"; // Outputs what will be outputted next

    sort(marks.begin(), marks.end()); // Sorts the array to lowest to highest
    for (int x : marks) { // A for loop that will output the lowest to highest marks

        cout << x << " ";
    }

    cout << "\n\nThe following contents showcases the highest to lowest marks of the 20 students in Math\n\n"; // Outputs what is going to be outputted next
    reverse(marks.begin(), marks.end()); // Reverses the arrangement of the array and sorts it to highest to lowest
    for (int x : marks) { // A for loop that will output the highest to lowest marks

        cout << x << " ";
    }

    cin.get(); // Keeps the console window open
    return 0;

}