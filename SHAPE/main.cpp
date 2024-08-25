#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Ellipse.h"
#include <iostream>
using namespace std;

int main()
{
	Circle c(10.5, 23);
	c.show();
	cout << "\n-----------------------------------\n";
	c.set_point(44.1);
	c.show();
	cout << "\n-----------------------------------\n";
	Square s(19.5, 10);
	s.show();
	cout << "\n-----------------------------------\n";
	Rectangle r(90.8, 50, 70);
	r.show();
	cout << "\n-----------------------------------\n";
	Ellipse e();
	r.show();
}