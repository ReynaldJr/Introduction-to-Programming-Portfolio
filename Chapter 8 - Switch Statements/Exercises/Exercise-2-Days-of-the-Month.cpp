#include <iostream>
using namespace std;

int main()
{
	cout << "Days of the Month\n";
	cout << "Type the number that corresponds to what month you want to check:\n 1. January\n 2. February\n 3. March\n 4. April\n 5. May\n 6. June\n 7. July\n 8. August\n 9. September\n 10. October \n 11. November\n 12. December\n";
	int input;
	cin >> input;

	switch (input) {

	case 1:
		cout << "January has 31 days.\n";
		break;

	case 2: 
		cout << "February has 28 days or 29 days in a leap year\n";
		break;
	case 3:
		cout << "March has 31 days\n";
		break;
	case 4:
		cout << "April has 30 days\n";
		break;

	case 5:
		cout << "May has 31 days\n";
		break;
	
	case 6:
		cout << "June has 30 days\n";
		break;
	case 7:
		cout << "July has 31 days\n";
		break;

	case 8:
		cout << "August has 31 days\n";
		break;
	case 9:
		cout << "September has 30 days\n";
		break;
	case 10:
		cout << "October has 31 days\n";
		break;
	case 11:
		cout << "November has 30 days\n";
		break;
	case 12:
		cout << "December has 31 days\n";
		break;

	default:
		cout << "Invalid Input\n";
	}
}