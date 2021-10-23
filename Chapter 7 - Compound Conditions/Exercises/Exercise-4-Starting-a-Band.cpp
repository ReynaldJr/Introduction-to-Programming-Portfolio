#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "This Program Will Check If Your Friend Is Eligible to Enter the Band and If You Can Start a Band!\n\n"; // Outputs the title of the program
	bool musicalFriend = true;
	string friendPlays = "guitar";
	string friendPlays2 = "drums";

	bool musicalFriendin;
	string friendPlaysin;

	cout << "Is your friend talented at music? (Write 0 if No, Write 1 if Yes)\n"; // Asks the user if the friend is talented at music
	cin >> musicalFriendin; // User inputs answer


	if (musicalFriend == musicalFriendin) { // If the user is a musical friend this will execute

		cout << "What instrument does your friend play? (Please type in lowercase only)\n"; // Asks the user what instrument the friend plays
		cin >> friendPlaysin; // User inputs instrument

		if (friendPlaysin == friendPlays || friendPlaysin == friendPlays2) { // If the user's friend plays guitar or drums this will execute

			cout << "\nCongratulations, your friend can enter the band!\n";
			cout << "You can start a band!\n";

		}

		else { // If the user types the input incorrectly or if the user's friend plays an instrument other than guitar or drums this will execute

			cout << "\nAww... Sorry, we don't accept the instrument your friend is using for the band.\n"; 
			cout << "You can't start a band.\n";
		}

	}

	else { // If the user is not a musical friend this will execute
		
		cout << "\nAww... Sorry, we only allow musical friends in the band.\n";
		cout << "You can't start a band.\n";
	}
	cin.get();
	return 0;
}