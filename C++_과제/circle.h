#pragma once
#include <iostream>

class Circle {
private:
	double radius;
	const double PI = 3.14;
public:
	Circle();
	Circle(double radius);
	Circle(const Circle& circle);
	~Circle();
	void setRadius(double radius);
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
};