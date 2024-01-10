#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
	const double PI = 3.14;
public:
	//����Լ� ������Ÿ��
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void setRadius(double value);
};

int main(void)
{
	cout << "Circle 1" << endl;
	Circle circle1;
	circle1.setRadius(10.0);
	cout << "������ " << circle1.getRadius() << endl; //circle1��ü�� ����Լ� getRadius() ȣ���� ������ ���
	cout << "���� " << circle1.getArea() << endl; //circle1��ü�� ����Լ� getArea() ȣ���� ���� ���
	cout << "�ѷ� " << circle1.getPerimeter() << endl;

	cout << "Circle 2" << endl;
	Circle circle2;
	circle2.setRadius(20.0);
	cout << "������ " << circle2.getRadius() << endl; 
	cout << "���� " << circle2.getArea() << endl; 
	cout << "�ѷ� " << circle2.getPerimeter() << endl;

	return 0;
}
//Ŭ����:: �߰��ѵ� ������Ÿ�� �״�� ���� �Լ� �ۼ��ϸ��.
double Circle::getRadius() const {
	return radius;
}
double Circle::getArea() const {
	return PI * radius * radius;
}
double Circle::getPerimeter() const {
	return 2 * PI * radius;
}
void Circle::setRadius(double value) {
	radius = value;
}