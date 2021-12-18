#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
	int six = 0; // Declaring the variable for counter for six
	srand(7); // srand is used to generate random numbers
	array<int, 1000> randomArray; // Declaring an array with 1000 numbers

	for (int i = 0; i < 1000; i++) { // A for loop to iterate through the 1000 numbers

		randomArray[i] = rand() % 100; // Generating random variables between 1-100

		cout << randomArray[i] << endl; // Prints out the random numbers

		if (randomArray[i] == 6) { // If statement if the random numbers display a 6
			six++; // Increments the counter for six
		}

	}

	cout << endl << six << " 6s have appeared in the console\n"; // Prints out how many times a 6 appeared
	cin.get(); // Keeps the console window open
	return 0;
}