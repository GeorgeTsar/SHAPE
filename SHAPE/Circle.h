#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle() = default;
	Circle(double a, double b) : Shape(a, b) {};
	void set_point(double a);  // ���������
	void set_side(double b);   // ���������
	void show()const;          // ���������������
};

