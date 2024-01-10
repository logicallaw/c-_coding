/*
원뿔의 부피를 구하는 프로그램이다.
양의 실수가 입력됨을 가정한다.
양의 실수 double num1, num2가 입력된다.
부피를 계산해 출력한다.
원주율은 3.14

부피 논리
double result = ((pi * num1 * num1) * num2 ) / 3;
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double num1, num2;
	cout << "반지름을 입력하세요: ";
	cin >> num1;
	cout << "높이를 입력하세요: ";
	cin >> num2;
	//3.14 * pow(num1,2) * num2 / 3
	cout << endl << "부피: " << 3.14 * pow(num1, 2) * num2 / 3 << endl;

	return 0;
}