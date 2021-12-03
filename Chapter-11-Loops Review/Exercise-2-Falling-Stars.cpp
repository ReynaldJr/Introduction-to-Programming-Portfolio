#include <iostream>
using namespace std;

int main()
{
	int i = 1; // Variable i to iterate the outer loop
	while (i <= 5) { // Iterates the outer loop 5 times
		int j = i; // Variable j to iterate the inner loop
		while (j <= 5) { // Iterates the inner loop 5 times
			cout << "*"; // Displays the falling stars from 5 to 1
			j++; // Increments the inner loop by 1
		}
		cout << endl; // Line break 
		i++; // Increments the outer loop by 1

	}
	cin.get(); // Keeps the console window open
	return 0;
}