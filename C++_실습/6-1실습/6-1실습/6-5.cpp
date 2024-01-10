/*
두점을 무작위로 입력받는다. 값은 -100~100사이의 정수값이다.
두 점 x,y를 입력받았다면   double result = sqrt(num)/num = pow(dott1,2)+pow(dott2,2)로 계산한다
두 점을 무작위로 생성하는 int randomDot()함수
거리를 계산하는 double distance(int dot1, int dot2);
*/
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int randomDot();

int main(void)
{
	int x1, x2, y1, y2;
	srand(time(0));
	x1 = randomDot();
	x2 = randomDot();
	y1 = randomDot();
	y2 = randomDot();

	cout << "첫 번째 점: (" << x1 << ", " << y1 << ")" << endl;
	cout << "두 번째 점: (" << x2 << ", " << y2 << ")" << endl;
	double result = sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2));
	cout << "두 점 사이의 거리 : " << result << endl;
}

int randomDot()
{
	int x;
	x = rand() % 201 - 100;
	return x;
}