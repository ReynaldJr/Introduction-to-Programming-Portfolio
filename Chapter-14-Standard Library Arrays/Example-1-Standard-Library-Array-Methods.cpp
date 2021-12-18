#include <iostream>
#include <array>
using namespace std;

int main()
{

	array<string, 4> arr = { "Mars Bar", "Snickers", "Bounty", "Wispa" };

	cout << arr.at(1) << endl; // Returns value at index 1
	cout << arr[1] << endl; // Does the same as above

	cout << arr.front() << endl; // Returns value at beginning

	cout << arr.back() << endl; // Returns value at end of array

	for (int i = 0; i < arr.size(); i++) { // For loop to run through array (Use size() in condition)

		cout << arr.at(i) << ", ";
	}

	cout << endl;
}