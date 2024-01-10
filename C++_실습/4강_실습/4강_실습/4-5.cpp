#include <iostream>
using namespace std;
/*
double형 a,b 입력받음
char형 연산자 입력받음
연산자의 종류에 따라 연산을 다르게 한다.
double형 결과 result 계산함
*/
int main(void)
{
	int num1, num2;
	char operatorN;
	double resultN;

	cout << "식을 입력해주세요: ";
	cin >> num1 >> operatorN >> num2;

	switch (operatorN) {
	case '+':
		resultN = num1 + num2;
		break;
	case '-':
		resultN = num1 - num2;
		break;
	case '*':
		resultN = num1 * num2;
		break;
	case '/':
		resultN = static_cast<double>(num1) / num2;
		break;
	case '%':
		resultN = num1 % num2;
		break;
	}
	cout << num1 << " " << operatorN << " " << num2 << " = " << resultN << endl;

	return 0;

}