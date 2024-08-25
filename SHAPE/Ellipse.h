#pragma once
#include "Rectangle.h"

class Ellipse : public Rectangle
{
public:
	Ellipse() = default;
	Ellipse(double a, double b, double c) : Rectangle(a, b, c) {};
	void set_point(double a);
	void set_side(double b, double c);
	void show()const;
};

