#include <iostream>
using namespace std;

int main()
{
    cout << "Grades\n";

    int grades[5];
    double sum, average;
    sum = 0;


    for (int i = 0; i < 5; i++) {
        cout << "Please enter the mark for subject " << i+1 << endl;
        cin >> grades[i];

        while (cin.fail() || grades[i] < 0 || grades[i] > 100) {
            cout << "Invalid input, please try again!\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> grades[i];
            }
        sum = sum + grades[i];


    }

    average = sum / 5;

    cout << "Your average is " << average << endl;

}
