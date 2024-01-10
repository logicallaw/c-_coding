#include <iostream>
using namespace std;

class Circle
{
private:
	double radius;
	const double PI = 3.14;
public:
	Circle();
	Circle(double radius);
	Circle(const Circle& origin);
	~Circle();

	void setRadius(double radius);
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
};

int main(void)
{
	Circle circle1{ 5.2 };
	cout << "반지름: " << circle1.getRadius() << endl;
	cout << "넓이: " << circle1.getArea() << endl;
	cout << "둘레: " << circle1.getPerimeter() << endl;

	Circle circle2{ circle1 };
	cout << "반지름: " << circle2.getRadius() << endl;
	cout << "넓이: " << circle2.getArea() << endl;
	cout << "둘레: " << circle2.getPerimeter() << endl;

	Circle circle3;
	cout << "반지름: " << circle3.getRadius() << endl;
	cout << "넓이: " << circle3.getArea() << endl;
	cout << "둘레: " << circle3.getPerimeter() << endl;

	return 0;
}

Circle::Circle()
	: radius{ 0.0 }
{
	cout << "기본 생성자가 호출되었습니다." << endl;
}
Circle::Circle(double rds)
	: radius{ rds }
{
	cout << "매개변수 생성자가 호출되었습니다." << endl;
}
Circle::Circle(const Circle& origin)
	: radius{ origin.radius }
{
	cout << "복사 생성자가 호출되었습니다." << endl;
}

Circle::~Circle()
{
	cout << "소멸자가 호출되었습니다." << endl;
}

void Circle::setRadius(double value) { radius = value; }
double Circle::getRadius() const { return radius; }
double Circle::getArea() const { return PI * radius * radius; }
double Circle::getPerimeter() const { return 2 * PI * radius; }