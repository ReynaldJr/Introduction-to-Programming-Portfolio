#include <iostream>
using namespace std;

int main() {

	double myNum = 20; // Declaring and initializing variable myNum to 20

		while (myNum > 0) { // While loop to prevent myNum reaching negative
			cout << myNum << endl; // Outputs myNum
			myNum = myNum - 0.5; // Decreases myNum by 0.5

		}

		cin.get(); // Keeps console window open
		return 0;
}