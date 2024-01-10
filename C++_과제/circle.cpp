#include <iostream>
#include "circle.h"
using namespace std;
Circle::Circle()
	: radius{ 0.0 } {
	cout << "기본 생성자가 호출되었습니다." << endl;
}

Circle::Circle(double rds)
	: radius{ rds } {
	cout << "매개변수가 생성자가 호출되었습니다." << endl;
}

Circle::Circle(const Circle& circle)
	: radius{ circle.radius } {
	cout << "복사 생성자가 호출되었습니다." << endl;
}

Circle::~Circle() {
	cout << "소멸자가 호출되었습니다. 반지름: " << radius << endl;
}

void Circle::setRadius(double value) { radius = value; }
double Circle::getRadius() const { return radius; }
double Circle::getArea() const {
	return PI * radius * radius;
}
double Circle::getPerimeter() const {
	return 2 * PI * radius;
}