#include <iostream>
using namespace std;

int main()
{

	bool sunday = true, monday = false, tuesday = false, wednesday = false, thursday = false;
	if (sunday == true) {
		cout << "Set alarm for 10 gotta be in CodeLab 1 session" << endl;
	}
	else if (monday == true) {
		cout << "Set alarm for 10 gotta be in CodeLab 1 session" << endl;
	}
	else if (tuesday == true) {
		cout << "No session for CodeLab1 ;Check timetable for other modules" << endl;
	}
	else if (wednesday == true) {
		cout << "No session for CodeLab1 ;Check timetable for other modules " << endl;
	}
	else if (thursday == true) {
		cout << "No session for CodeLab1 ;Check timetable for other modules " << endl;
	}
	else {
		cout << "Must be the weekend :Holiday Time" << endl;
	}
}