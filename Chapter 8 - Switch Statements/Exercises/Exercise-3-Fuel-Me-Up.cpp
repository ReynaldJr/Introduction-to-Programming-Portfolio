#include <iostream>
using namespace std;

int main() {
	cout << "Welcome to the Automatic Fuel Filling Service!\n\n"; // Outputs the title of the program
	cout << "Please input how many liters do you need to fill up the car.\n"; // Asks the user for input
	double liters; // Declaring variable for user input
	cin >> liters; // User inputs liters


		cout << "\nThe amount of liters you have inputted is " << liters << " liters\n"; // Outputs the liters the user inputted

		cout << "Now, it's time to select what type of fuel do you want for the car.\n\n"; // Outputs the message to tell the user to select the fuel

		cout << "In today's current market value, the price for each type fuel is:\n\n";

		cout << "Diesel: 2.51 AED/Liter\n"; // Outputs the current market value for Diesel

		cout << "\nPetrol:\n";

		cout << "1. 98 Super: 2.60 AED/Liter\n2. 95 Special: 2.49 AED/Liter\n3. 91 E-Plus: 2.42 AED/Liter\n"; // Outputs the current market value for the three types of Petrol

		char fuel; // Declaring variable for user input
		cout << "\nPlease type 'p' for Petrol or 'd' for Diesel\n"; // Tells the user the instructions for the input
		cin >> fuel; // User inputs liters

		switch (fuel) {

		case 'd': // Case for lowercase d.
		case 'D': // Case for uppercase D.
		{
			cout << "The fuel type you have selected to fill up your car is Diesel.\n\n"; //Outputs what fuel type the user chose
			liters = liters * 2.51; // Formula for Diesel
			cout << "Filling your car with fuel...\n"; // Outputs that the car is being filled with fuel.
			cout << "Your car has been successfully filled with fuel\n\n"; // Outputs that the car has been filled with fuel.
			cout << "Please pay " << liters << " AED\n"; // Outputs the total price for fuel
			break; // Stops the case
		}

		case 'p': // Case for lowercase p.
		case 'P': // Case for uppercase P.
		{

			cout << "The fuel type you have selected to fill up your car is Petrol.\n\n";  // Outputs what fuel type the user chose
			cout << "Please select what type of petrol do you want to choose to fill up your car.\n"; // Outputs the message to tell the user to select the petrol fuel
			cout << "1. 98 Super: 2.60 AED/Liter\n2. 95 Special: 2.49 AED/Liter\n3. 91 E-Plus: 2.42 AED/Liter\n"; // Outputs the current market value for the three types of Petrol
			cout << "\nOnly type the number that corresponds to the petrol type you want to choose.\n\n";  // Outputs instructions on what the user should input.

			int petrol_type; // Declaring variable for user input
			cin >> petrol_type; // User inputs petrol_type

			switch (petrol_type) {

			case 1: // Case for 98 Super
				cout << "The petrol type you have selected to fill up your car is 98 Super.\n\n"; // Outputs what petrol type the user chose
				liters = liters * 2.60; // Formula for 98 Super
				cout << "Filling your car with fuel...\n"; // Outputs that the car is being filled with fuel.
				cout << "Your car has been successfully filled with fuel\n\n"; // Outputs that the car has been filled with fuel.
				cout << "Please pay " << liters << " AED\n"; // Outputs the total price for fuel
				break; // Stops the case

			case 2: // Case for 95 Special
				cout << "The petrol type you have selected to fill up your car is 95 Special.\n\n"; // Outputs what fuel type the user chose
				liters = liters * 2.49; // Formula for 95 Special
				cout << "Filling your car with fuel...\n"; // Outputs that the car is being filled with fuel.
				cout << "Your car has been successfully filled with fuel\n\n"; // Outputs that the car has been filled with fuel.
				cout << "Please pay " << liters << " AED\n"; // Outputs the total price for fuel
				break; // Stops the case

			case 3: // Case for 91 E-Plus
				cout << "The petrol type you have selected to fill up your car is 91 E-Plus\n\n"; // Outputs what fuel type the user chose
				liters = liters * 2.42; // Formula for 91 E-Plus
				cout << "Filling your car with fuel...\n"; // Outputs that the car is being filled with fuel.
				cout << "Your car has been successfully filled with fuel\n\n"; // Outputs that the car has been filled with fuel.
				cout << "Please pay " << liters << " AED\n"; // Outputs the total price for fuel
				break; // Stops the case

			default: // Default case
				cout << "Invalid Input\n"; // Outputs this message if user doesn't enter a number from 1-3

			}

			break; // Stops the case
		}

		default: // Default case

			cout << "Invalid Input\n"; // Outputs this message if user doesn't enter letters: 'p', 'P', 'd', or 'D'.
		}


	}

	cin.get(); // Keeps the console window open.
	return 0;
}
