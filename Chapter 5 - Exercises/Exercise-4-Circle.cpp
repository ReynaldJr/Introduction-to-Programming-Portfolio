#include <iostream>
using namespace std;

int main() {

	double r, a, c; // Declaring the variables for radius, area, and circumference

	cout << "Please input the radius of the circle to calculate its area and circumference." << endl; // Asks the user for input
	cin >> r; // User inputs the radius

	a = 3.14 * r * r; // Formula to calculate the area
	c = 2 * 3.14 * r; // Formula to calculate the circumference

	cout << "The area of the circle is: " << a << endl; // Outputs the area of the circle

	cout << "The circumference of the circle is: " << c << endl; // Outputs the circumference of the circle

	cin.get(); // Keeps the console window open
	return 0;
}