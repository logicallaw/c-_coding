#include <iostream>
#include "circle.h"
using namespace std;
Circle::Circle()
	: radius{ 0.0 } {
	cout << "�⺻ �����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

Circle::Circle(double rds)
	: radius{ rds } {
	cout << "�Ű������� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

Circle::Circle(const Circle& circle)
	: radius{ circle.radius } {
	cout << "���� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�. ������: " << radius << endl;
}

void Circle::setRadius(double value) { radius = value; }
double Circle::getRadius() const { return radius; }
double Circle::getArea() const {
	return PI * radius * radius;
}
double Circle::getPerimeter() const {
	return 2 * PI * radius;
}