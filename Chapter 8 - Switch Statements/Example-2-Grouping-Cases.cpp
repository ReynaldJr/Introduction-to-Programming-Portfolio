#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Would you like sugar?"<< endl;
	char input;
	cin >> input;
	switch (input) {
	case 'Y':
	case 'y':
		cout << "Adding sugar..." << endl;
		break;
	case 'N':
	case 'n':
		cout << "No sugar requested..." << endl;
		break;
	default:
		cout << "That input was not recognized" << endl;
	}


}