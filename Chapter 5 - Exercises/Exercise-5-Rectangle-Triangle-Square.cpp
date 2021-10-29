#include <iostream>
using namespace std;

int main() {

	double l, w, r, t, s; // Declares the variables for length, width, rectangle, triangle, and square

	cout << "What is the length?" << endl; // Asks the user of what is the length
	cin >> l; // User inputs length

	cout << "What is the width?" << endl; // Asks the user of what is the width
	cin >> w; // User inputs width

	r = l * w; // Formula for the area of rectangle

	t = (l * w) / 2; // Formula for the area of triangle

	s = l * l; // Formula for the area of square

	cout << "The area of the rectangle is" << " " << r << endl; // Displays the area of rectangle
	cout << "The area of the triangle is" << " " << t << endl; // Displays the area of triangle
	cout << "The area of the square is" << " " << s << endl; // Displays the area of square


	cin.get(); // Keeps the console window open
	return 0;

}
