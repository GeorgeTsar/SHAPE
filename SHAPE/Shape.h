#pragma once

class Shape
{
protected:
	double point;
	double side;
public:
	Shape()=default;
	Shape(double a, double b) :point(a), side(b) {};
	//~Shape();
	void set_point();
	void set_side();
	void show()const;
};

