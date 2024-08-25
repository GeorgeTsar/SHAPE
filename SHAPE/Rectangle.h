#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
protected:
	double side_2;
public:
	Rectangle() = default;
	Rectangle(double a, double b, double c) : Shape(a, b), side_2(c) {};
	void set_point(double a);  
	void set_side(double b, double c);   
	void show()const;          
};

