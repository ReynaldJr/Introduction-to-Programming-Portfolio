#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "This Program Will Check What to Do in Situations That You're Killing Time in Dubai Mall.\n\n"; // Outputs the title of the program.

	cout << "How many minutes do you have left till your friend arrives with you in Dubai Mall?\n"; // Asks the user how many minutes does the friend have till he arrives,
	int time;
	cin >> time; // User inputs time

	if (std::cin.fail()) // A cin.fail function (This executes if user enters a value that is not a number)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Input. Please input numbers only\n";
	}

	else if (time >= 15) { // Executed if time is more than or equal to 15

		cout << "How much money do you have in your pocket?\n"; // Asks the user how much money does he have.
		double money;
		cin >> money; // User inputs money

		if (std::cin.fail()) // A cin.fail function (This executes if user enters a value that is not a number)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid Input. Please input numbers only\n";
			}

		else if (money > 5) { // Executed if money is more than 5
			cout << "\nGo buy a coffee!\n";


			cout << "\nNow pick a coffee to choose!\n"; // Added a creative twist to the task wherein the user will then pick what coffee to choose.
			cout << "\nYour favorite coffees are either: latte or cappuccino.\n"; // Asks user what coffee to choose between Latte or Cappuccino.
			string coffee; // String is chosen instead of char so an error will be outputted if user inputs more than one character.
			cout << "Please type 'L' if you want Latte or 'C' if you want Cappuccino\n";
			cin >> coffee; // User inputs the coffee

			if (coffee == "l" || coffee == "L") { // Executed if user types latte

				cout << "\nThe best Latte in Dubai Mall is definitely in Costa Coffee! Go to the ground floor to buy one.\n";
				cout << "\nCosta Coffee's  aromatic Espresso and creamy milk come together beautifully in their Latte. This pair is perfect for those who prefer their drinks hot in the winter and cool in the summer.\n";

			}

			else if (coffee == "c" || coffee == "C") { // Executed if user types cappuccino

				cout << "\nThe best Cappuccino in Dubai Mall is definitely in Starbucks! Go to the first floor to buy one.\n";
				cout << "\nUnder a smoothed and stretched layer of thick foam, Starbucks' extremely smooth and delicately sweet Espresso awaits. With a silky, frothy foam and a sharp, chilly undercurrent, this Cappuccino has a luscious mouthfeel.\n";

			}
			else { // Executed if user didn't input 'l', 'L', 'c', or 'C'
				cout << "\nInvalid Input! Please pick either Latte or Cappuccino.\n";
			}


		}

		else { // Executed if money is less than 5

			cout << "\nGo for a walk around the town!\n";

			cout << "\nNow pick a direction to walk!\n";  // Added a creative twist to the task wherein the user will then pick what direction to go.
			string direction;
			cout << "\nleft or right?\n"; // Asks the user if the direction is left or right.
			cout << "Please type 'L' if left or 'R' if Right\n"; // String is chosen instead of char so an error will be outputted if user inputs more than one character.
			cin >> direction; // User inputs the direction.

			if (direction == "L" || direction == "l") { // Executed if user inputs left

				cout << "\nAt your left, you will see the Dubai Aquarium\n";
				cout << "\nOver 33,000 marine species are on display at the Dubai Aquarium. Staring at the diverse fishes and other aquatic animals is a visual feast.\n";

			}

			else if (direction == "R" || direction == "r") { // Executed if user inputs right

				cout << "\nAt your right, you will see the Human Waterfalls.\n";
				cout << "\nThe Human Waterfalls is a beautiful water structure that will have observers marveling at the water falls. It is frequently utilized as a meeting point for mall visitors.\n";
			}

			else { // Executed if user didn't type the input correctly
				cout << "\nInvalid Input. You can only go left or right.\n";

			}



		}


		}
		else { // Executed if time is less than 15

			cout << "\nSit in the food zone and wait.\n";

		}

	cin.get(); // Keeps the console window open
	return 0;
}
