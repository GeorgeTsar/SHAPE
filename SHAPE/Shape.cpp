#include "Shape.h"
#include <iostream>
using namespace std;

//Shape::~Shape()
//{
//}

void Shape::set_point()
{
	point = 0;
}

void Shape::set_side()
{
	side = 0;
}

void Shape::show() const
{
	cout << "New shape!" << endl;
}
