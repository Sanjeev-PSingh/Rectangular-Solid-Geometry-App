/*
	Sanjeev Singh

	rectangle.cpp

	Prompt user for width, height and length of a rectangle,
	calculate its volume and surface area, and display the result
*/

// Header Files
#include <iostream>
using namespace std;

int main()
{
	//variables
	double width, height, volume, surface, length;

	// Intro
	cout << "Rectangle Solid Geometry App ..." << endl << endl;

	// Prompt uer for width, height & length
	cout << "Please enter rectangle's width: ";
	cin >> width;
	cout << "                         height: ";
	cin >> height;
	cout << "                         length: ";
	cin >> length;


	//Calculate volume
	volume = width * height * length;

	// Calculate Surface Area

	surface = (2 * length * height) + (2 * width * height) + (2 * width * length);

	//Display volume
	cout << "The volume of the rectangle is " << volume << " units." << endl;

	// Display Surface Area
	cout << "The surface area of the rectangle is " << surface << " units." << endl;

	return 0;
}