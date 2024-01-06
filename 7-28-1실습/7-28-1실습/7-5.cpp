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

	cout << "�� 1�� ����: " << endl;
	c1.getInfo();

	cout << "�� 2�� ����: " << endl;
	c2.getInfo();

	cout << "�� 3�� ����: " << endl;
	c3.getInfo();

	return 0;
}



Circle::Circle(double radius)
	: _radius{ radius }, _name{ count } {
	cout << "������ " << _radius << " �� ����" << endl;
	addCount();
}
Circle::Circle(const Circle& circle)
	: _radius{ circle._radius }, _name{ count } {
	cout << "������ " << _radius << " �� ���� ����" << endl << endl;
	addCount();
}

void Circle::printCircle() { cout << "���� ����: " << count << endl << endl; }
void Circle::addCount() { count++; }
void Circle::getInfo() const {
	cout << "������: " << getRadius() << endl;
	cout << "����: " << getCircum() << endl;
	cout << "����: " << getArea() << endl << endl;
}
double Circle::getRadius() const { return _radius; }
double Circle::getCircum() const { return 2 * PI * _radius; }
double Circle::getArea() const { return PI * _radius * _radius; }