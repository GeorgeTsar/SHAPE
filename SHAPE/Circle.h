#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle() = default;
	Circle(double a, double b) : Shape(a, b) {};
	void set_point(double a);  // Замещение
	void set_side(double b);   // Замещение
	void show()const;          // Переопределение
};

