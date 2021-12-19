#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
	array<int, 10> randomArray; // Declaring an array with 10 elements
	for (int i = 0; i < 10; i++) { // For loop that counts a variable from 0 to 9 in increments of 1 

		cout << "Please enter number " << i + 1 << ": "; // Asks user for input 10 times
		cin >> randomArray[i]; // User inputs the number 10 times
		while (cin.fail()) { // A cin.fail function that shows an error if user inputs anything that is not a number
			cout << "Invalid input, please try again\n";
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> randomArray[i];
		}

	}

	int small = randomArray[0]; // Initializing the small variable with the beginning of the array 

	for (int j = 0; j < 10; j++) { // For loop that counts a variable from 0 to 9 in increments of 1 

		if (small > randomArray[j]) { // If statement that checks the smallest element of an array

			small = randomArray[j]; // Assigns the smallest element of an array to a variable
		}
	}

	cout << "Smallest number in the array is: " << small << endl; // Outputs the largest number of the array
	cin.get(); // Keeps the console window open
	return 0;

}