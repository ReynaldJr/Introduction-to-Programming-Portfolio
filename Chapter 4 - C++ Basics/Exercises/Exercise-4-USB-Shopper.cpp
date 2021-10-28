#include <iostream>
using namespace std;


int main()
{
	int money = 50; // Declaring an int variable about the amount of money the girl has
	
	int usb = 6; // Declaring an int variable about how much the USB sticks cost each

	cout << "The amount of USB sticks the girl can get is " << money / usb << endl; // Outputs the amount of USB sticks the girl can get

	cout << "The girl will have " << money % usb << " " << "fils left" ; // Outputs the fils the girl will have left

	cin.get(); // Keeps the console window open
	return 0;

}

