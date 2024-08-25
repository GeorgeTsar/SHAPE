#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::set_point(double a)
{
	point = a;
}

void Rectangle::set_side(double b, double c)
{
	side = b;
	side_2 = c;
}

void Rectangle::show() const
{
	cout << "Coordinate of the upper left corner: " << point << endl << "Size of the first side: " << side << endl << "Size of the second side: " << side_2 << endl;
}
