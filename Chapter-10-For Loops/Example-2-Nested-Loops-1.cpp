#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; i++) { //execute the outer loop 5 times
		for (int j = 0; j < 5; j++) {//execute the inner loop 5 x 5 times
			cout << "*"; //print 5 stars
		}
		cout << endl; //print to a new console line
	}
}