#include "Ellipse.h"
#include <iostream>
using namespace std;

void Ellipse::set_point(double a)
{
	point = a;
}

void Ellipse::set_side(double b, double c)
{
	side = b;
	side_2 = c;
}

void Ellipse::show() const
{
	cout << "Coordinate of the upper left corner of the circumscribed rectangle: " << point << endl << "Size of the first side: " << side << endl << "Size of the second side: " << side_2 << endl;
}
