#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::set_point(double a)
{
	point = a;
}

void Circle::set_side(double b)
{
	side = b;
}

void Circle::show() const
{
	cout << "Coordinate of the center of the circle: " << point << endl << "Radius of the circle: " << side << endl;
}
