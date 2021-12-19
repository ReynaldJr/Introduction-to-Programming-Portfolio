#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "This Program Will Check If Your Friend Is Eligible to Enter the Band and If You Can Start a Band!\n\n"; // Outputs the title of the program
	bool musicalFriend; // Declaring variable for musicalFriend
	string friendPlays; // Declaring variable for the instrument the friend plays
	string input; // Declaring variable for user input

	cout << "Does your friend play any instrument for music? (Write N if No, Write Y if Yes)\n"; // Asks the user if the friend is talented at music
	cin >> input; // User inputs answer


	if (input == "Y" || input == "y") {

		musicalFriend = true;


		if (musicalFriend == true) { // If the user's friend plays the instrument this will execute

			cout << "What instrument does your friend play? (Please follow the instructions below)\n\n"; // Asks the user what instrument the friend plays
			cout << "- Please type 'G' if your friend plays the guitar.\n- Please type 'D' if your friend plays the drums.\n- Please type 'O' if your friend plays other instruments.\n"; // Outputs the instructions for user input
			cin >> friendPlays; // User inputs instrument

			if (friendPlays == "G" || friendPlays == "g") { // If the user's friend plays the guitar this will execute

				cout << "\nCongratulations, you are actually looking for a guitarist! Your friend can enter the band.\n";
				cout << "You can start a band!\n";

			}
			else if (friendPlays == "D" || friendPlays == "d") { // If the user's friend plays the drums this will execute

				cout << "\nCongratulations, you are actually looking for a drummer! Your friend can enter the band.\n";
				cout << "You can start a band!\n";

			}
			else if (friendPlays == "O" || friendPlays == "o") { // If the user types the input incorrectly or if the user's friend plays an instrument other than guitar or drums this will execute

				cout << "\nAww... Sorry, we don't accept the instrument your friend is using for the band. Try looking for someone else.\n";
				cout << "You can't start a band.\n";
			}

			else { // If user doesn't type what is said in the instructions correctly, this will output.
				cout << "Invalid Input\n";
			}

		}
	}

	else if (input == "N" || input == "n") { // If the user is not a musical friend this will execute
		
		cout << "\nAww... Sorry, you are only looking for friends that can play the instrument. Try looking for someone else.\n";
		cout << "You can't start a band.\n";
	}

	else { // If user doesn't type what is said in the instructions correctly, this will output.
		cout << "Invalid Input\n";
	}

	cin.get(); // Keeps the console window open
	return 0;
}