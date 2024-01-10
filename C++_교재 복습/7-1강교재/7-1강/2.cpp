#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
	const double PI = 3.14;
public:
	//������ ����
	/*
	Ŭ������� ����
	Ŭ������(�Ű�����);
	*/
	Circle();
	Circle(double rds);
	Circle(const Circle& circle);
	~Circle();
	/*
	���� �Լ� ������Ÿ�԰� ����/�Ű����� ��ϰ� const�� ������ ����
	����Ÿ�� �Լ���(�Ű�����) const����;
	*/
	void setRadius(double radius);
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
};
int main(void)
{
	//�Ű����� ������ �̿�
	Circle circle1{ 5.2 };
	cout << "������: " << circle1.getRadius() << endl;
	cout << "����: " << circle1.getArea() << endl;
	cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl;

	//��������� �̿��ؼ� ��ü����
	Circle circle2{ circle1 };
	cout << "������: " << circle2.getRadius() << endl;
	cout << "����: " << circle2.getArea() << endl;
	cout << "�ѷ�: " << circle2.getPerimeter() << endl << endl;

	//�⺻������ �̿��ؼ� ��ü����
	Circle circle3;
	cout << "������: " << circle3.getRadius() << endl;
	cout << "����: " << circle3.getArea() << endl;
	cout << "�ѷ�: " << circle3.getPerimeter() << endl << endl;

	return 0;
}

//Ŭ����Ÿ��::�����ڸ�(�Ű�����):�������{�ʱ갪}{body}
//�ʱ갪-->������O, �Լ�X
Circle::Circle()
	: radius{ 0.0 } {
	cout << "�⺻ �����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

Circle::Circle(double rds)
	: radius{ rds } {
	cout << "�Ű����� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

Circle::Circle(const Circle& circle)
	: radius{ circle.radius } {
	cout << "���� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�." << radius;
	cout << endl;
}

//����Ÿ�� Ŭ������::����Լ���(�Ű�����) {body}
//���� �Լ� ���ǿ� ����/�Լ��� �տ� Ŭ������::�� �ٸ�.
void Circle::setRadius(double value) { radius = value; }
double Circle::getRadius() const { return radius; }
double Circle::getArea() const {
	return PI * radius * radius;
}
double Circle::getPerimeter() const {
	return 2 * PI * radius;
}