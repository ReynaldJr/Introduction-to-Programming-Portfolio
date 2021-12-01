#include <iostream>
#include <string>
using namespace std;

int main()
{
	string courses[] = { "BSU CC", "BSU BA", "HNC CC", "HND" };

	for (int i = 0; i < 4; i++) {
		cout << courses[i] << endl;
	}

	cout << endl;

	for (auto course : courses) {
		cout << course << endl;
	}

}