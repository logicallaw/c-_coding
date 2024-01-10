#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
	const double PI = 3.14;
public:
	//생성자 선언
	/*
	클래스명과 동일
	클래스명(매개변수);
	*/
	Circle();
	Circle(double rds);
	Circle(const Circle& circle);
	~Circle();
	/*
	기존 함수 프로토타입과 동일/매개변수 목록과 const의 차이점 존재
	리턴타입 함수명(매개변수) const유무;
	*/
	void setRadius(double radius);
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
};
int main(void)
{
	//매개변수 생성자 이용
	Circle circle1{ 5.2 };
	cout << "반지름: " << circle1.getRadius() << endl;
	cout << "넓이: " << circle1.getArea() << endl;
	cout << "둘레: " << circle1.getPerimeter() << endl << endl;

	//복사생성자 이용해서 객체생성
	Circle circle2{ circle1 };
	cout << "반지름: " << circle2.getRadius() << endl;
	cout << "넓이: " << circle2.getArea() << endl;
	cout << "둘레: " << circle2.getPerimeter() << endl << endl;

	//기본생성자 이용해서 객체생성
	Circle circle3;
	cout << "반지름: " << circle3.getRadius() << endl;
	cout << "넓이: " << circle3.getArea() << endl;
	cout << "둘레: " << circle3.getPerimeter() << endl << endl;

	return 0;
}

//클래스타입::생성자명(매개변수):멤버변수{초깃값}{body}
//초깃값-->생성자O, 함수X
Circle::Circle()
	: radius{ 0.0 } {
	cout << "기본 생성자가 호출되었습니다." << endl;
}

Circle::Circle(double rds)
	: radius{ rds } {
	cout << "매개변수 생성자가 호출되었습니다." << endl;
}

Circle::Circle(const Circle& circle)
	: radius{ circle.radius } {
	cout << "복사 생성자가 호출되었습니다." << endl;
}

Circle::~Circle() {
	cout << "소멸자가 호출되었습니다." << radius;
	cout << endl;
}

//리턴타입 클래스명::멤버함수명(매개변수) {body}
//기존 함수 정의와 동일/함수명 앞에 클래스명::만 다름.
void Circle::setRadius(double value) { radius = value; }
double Circle::getRadius() const { return radius; }
double Circle::getArea() const {
	return PI * radius * radius;
}
double Circle::getPerimeter() const {
	return 2 * PI * radius;
}