#include <iostream>
using namespace std;

int main()
{
	string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" }; // Declaring and initializing an array that stores the values for each month of the year

	for (int i = 0; i < 12; i++) { // A for loop that outputs the values stored in the array

		cout << months[i] << endl;
	}

	cin.get(); // Keeps console window open
	return 0;
}