/*
삼각형 넓이 계산하는 프로그램이다.
사용자로부터 세 변의 길이인 자연수를 입력받는다.
unsigned int a,b,c;
double s = (a + b + c) / 2;
double result = sqrt(s*(s-a)*(s-b)*(s-c));

*/
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double a, b, c;
	cout << "삼각형 세 변의 길이를 입력하세요: ";
	cin >> a >> b >> c;

	double s = (a + b + c) / 2;
	double result = sqrt(s * (s - a) * (s - b) * (s - c));

	cout << endl;
	cout << "넓이: " << result << endl;

	return 0;
}