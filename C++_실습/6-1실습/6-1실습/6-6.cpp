/*
원의 외접하는 정사각형의 넓이 프로그램
double음이 아닌 실수를 입력받아 원의 넓이를 저장한다.
원의넓이로 반지름 구하는 함수 getRadius 정의한다.
(소수점 아래 셋째자리까지)
(pi=3.14)
반지름 구하면  4r제곱하면 정사각형 넓이 안다.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double getRadius(double getArea);

int main(void)
{
	double num;
	double radius;
	double result;

	cout << "원의 넓이를 입력하세요: ";
	cin >> num;
	radius = getRadius(num);
	result = pow(2 * radius,2);
	cout << "원에 외접하는 정사각형의 넓이: " << fixed << setprecision(3) << result << endl;

	return 0;
}

double getRadius(double getArea)
{
	return sqrt(getArea / 3.14);
}