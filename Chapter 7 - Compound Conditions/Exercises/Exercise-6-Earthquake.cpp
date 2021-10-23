#include <iostream>
using namespace std;

int main() {


	cout << "This Program Reads the Magnitude From the User Under the Richter Scale and Displays an Appropriate Descriptor to It.\n\n"; // Outputs the title of the program.


	cout << "To get started, please enter the magnitude of the earthquake\n"; // Asks the user to input the magnitude of the earthquake.
	double magnitude;

	cin >> magnitude; // User inputs magnitude


	if (magnitude <= 10.0) { // Executed if magnitude is less than 10.0

		if (magnitude < 2.0) { // Executed if magnitude is less than 2.0
			cout << "\nThe earthquake's magnitude is micro.\n";
			cout << "During such earthquake, people aren't usually aware of it, even if it's recorded on local instruments.\n";
		}
		else if (magnitude >= 2.0 && magnitude < 3.0 ) { // Executed if magnitude is between 2.0 to 2.9
			cout << "\nThe earthquake's magnitude is very minor.\n";
			cout << "In this earthquake, some people have a small sense of it and no structural damage.\n";
		}

		else if (magnitude >= 3.0 && magnitude < 4.0) { // Executed if magnitude is between 3.0 - 3.9
			cout << "\nThe earthquake's magnitude is minor.\n";
			cout << "People are often aware of it, yet it rarely does harm. The swaying of indoor objects can be felt.\n";
		}
		else if (magnitude >= 4.0 && magnitude < 5.0) { // Executed if magnitude is between 4.0 - 4.9
			cout << "\nThe earthquake's magnitude is light.\n";
			cout << "Interior things shake and creaking noises are audible. Most people in the affected area are aware of it. In most cases, there is no or limited injury.\n";
		}
		else if (magnitude >= 5.0 && magnitude < 6.0) { // Executed if magnitude is between 5.0 - 5.9
			cout << "\nThe earthquake's magnitude is moderate.\n";
			cout << "Can inflict varied degrees of damage to poorly designed structures. All other structures suffered minor to no damage. Everyone can sense it.\n";
		}
		else if (magnitude >= 6.0 && magnitude < 7.0) { // Executed if magnitude is between 6.0 - 6.9
			cout << "\nThe earthquake's magnitude is strong.\n";
			cout << "A moderate number of well-built structures in inhabited regions can be damaged. Wider areas are affected, extending hundreds of kilometers from the epicenter. In the epicentral area, there is strong to intense shaking.\n";
		}
		else if (magnitude >= 7.0 && magnitude < 8.0) { // Executed if magnitude is between 7.0 - 7.9
			cout << "\nThe earthquake's magnitude is major.\n";
			cout << "Most buildings are damaged, with some partially or totally collapsing or receiving serious damage. Major damage is primarily limited to 250 kilometers from the epicenter, however it can be felt over a wide area.\n";
		}
		else if (magnitude >= 8.0 && magnitude <= 10.0) { // Executed if magnitude is between 8.0 - 9.9
			cout << "\nThe earthquake's magnitude is great.\n";
			cout << "Buildings have suffered significant damage, and structures are likely to be demolished. Large-scale destruction. Extremely large areas are affected.\n";
		}
	}	
	else { // Executed if magnitude is more than 10.0
		cout << "\nThe earthquake's magnitude is meteoric.\n";
		cout << "All buildings have been severely damaged or collapsed, resulting in entire or near-total destruction. Changes in the topography of the ground are permanent.\n";
	}

	cout << "\n\nSource: Wikipedia Contributors (2021) Richter Magnitude Scale. [online] En.wikipedia.org. Available at: <https://en.wikipedia.org/wiki/Richter_magnitude_scale> [Accessed 30 September 2021].\n"; // Outputs the source used in writing the magnitude.

	cin.get();
	return 0;
} 