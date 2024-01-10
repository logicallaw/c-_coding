#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
	const double PI = 3.14;
public:
	//멤버함수 프로토타입
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
	cout << "반지름 " << circle1.getRadius() << endl; //circle1객체의 멤버함수 getRadius() 호출해 반지름 출력
	cout << "넓이 " << circle1.getArea() << endl; //circle1객체의 멤버함수 getArea() 호출해 넓이 출력
	cout << "둘레 " << circle1.getPerimeter() << endl;

	cout << "Circle 2" << endl;
	Circle circle2;
	circle2.setRadius(20.0);
	cout << "반지름 " << circle2.getRadius() << endl; 
	cout << "넓이 " << circle2.getArea() << endl; 
	cout << "둘레 " << circle2.getPerimeter() << endl;

	return 0;
}
//클래스:: 추가한뒤 프로토타입 그대로 적고 함수 작성하면됨.
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