#include "Square.h"
#include <iostream>
using namespace std;

void Square::set_point(double a)
{
	point = a;
}

void Square::set_side(double b)
{
	side = b;
}

void Square::show() const
{
	cout << "Coordinate of the upper left corner: " << point << endl << "Length of the side: " << side << endl;
}
