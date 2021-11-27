#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++) {
		for (int j = i; j <= 5; j++) { //execute the inner loop 5 times
			cout << "*"; //print reducing lines of stars
		}
		cout << endl; //print to a new console line
	}
}