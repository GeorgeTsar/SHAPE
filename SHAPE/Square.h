#pragma once
#include "Shape.h"

class Square : public Shape
{
public:
	Square() = default;
	Square(double a, double b) : Shape(a, b) {};
	void set_point(double a);  
	void set_side(double b);   
	void show()const;          
};

