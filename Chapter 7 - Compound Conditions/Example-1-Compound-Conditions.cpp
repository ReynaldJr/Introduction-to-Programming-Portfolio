#include <iostream>
using namespace std;

int main()
{
	// Logical And (&&)

	int porridgeTemperature = 30;

	if ((porridgeTemperature > 40) && (porridgeTemperature < 60)) {

		cout << "That's just right!" << endl;
	}
	// Logical NOT

	int brotherA = 15;
	int brotherB = 12;

	if (!(brotherA < brotherB)) {

		cout << "Brother A is older\n";
	}

	// Logical OR (||) and Combining Logical Operators
	bool hasVisa = false;
	bool hasDrivingLicense = true;
	bool drunk = false;

	if ((hasVisa == true) || (hasDrivingLicense == true) && !drunk) {

	cout << "You can drive" << endl;

	} else {

		cout << "Sorry, you can't" << endl;

	}

}