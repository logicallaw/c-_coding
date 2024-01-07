#include <iostream>
using namespace std;
class Circle
{
private:
	const double PI = 3.14;
	double _radius;
	int _name;
	static int count;
public:
	Circle(double radius);
	Circle(const Circle& circle);
	void getInfo() const;
	double getRadius() const;
	double getCircum() const;
	double getArea() const;
	static void addCount();
	static void printCircle();

};
int Circle::count{ 0 };

int main(void)
{
	Circle::printCircle();
	Circle c1{ 13 };
	Circle c2{ 31 };
	Circle c3{ c1 };

	Circle::printCircle();

	cout << "원 1의 정보: " << endl;
	c1.getInfo();

	cout << "원 2의 정보: " << endl;
	c2.getInfo();

	cout << "원 3의 정보: " << endl;
	c3.getInfo();

	return 0;
}



Circle::Circle(double radius)
	: _radius{ radius }, _name{ count } {
	cout << "반지름 " << _radius << " 원 생성" << endl;
	addCount();
}
Circle::Circle(const Circle& circle)
	: _radius{ circle._radius }, _name{ count } {
	cout << "반지름 " << _radius << " 원 복사 생성" << endl << endl;
	addCount();
}

void Circle::printCircle() { cout << "원의 개수: " << count << endl << endl; }
void Circle::addCount() { count++; }
void Circle::getInfo() const {
	cout << "반지름: " << getRadius() << endl;
	cout << "원주: " << getCircum() << endl;
	cout << "넓이: " << getArea() << endl << endl;
}
double Circle::getRadius() const { return _radius; }
double Circle::getCircum() const { return 2 * PI * _radius; }
double Circle::getArea() const { return PI * _radius * _radius; }