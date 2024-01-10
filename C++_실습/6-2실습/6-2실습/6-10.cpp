/*
정수 연산, 실수 연산 오버로딩 함수 작성
연산기호 + - * /
0으로 나누면 결과는 0이다.

각각 정수와 실수 입력받는다.
연산 기호에 따라 계산을 다르게 한다.
나누기 연산할 때만 조심한다.

정수 연산함수
int numO(int x, int y, string op)
	int result = 0;
	switch (op)
	case "+":
		result = x + y;
		break;
	case "-":
		result = x - y;
		break;
	case "*":
		result = x * y;
		break;
	case "/":
		if (y) result = x / y;
		break;
	case "%":
		if (y) result = x % y;
		break;
실수 연산함수
double numO(double x, double y, string op)

int a,b,op1;
cin >> a >> b >> op1;

*/
#include <iostream>
using namespace std;

int numO(int x, int y, char op);
double numO(double x, double y, char op);

int main(void)
{
	int a, b;
	char op1;
	cout << "정수 연산식을 입력하세요: ";
	cin >> a >> op1 >> b;

	cout << "계산 결과: " << numO(a, b, op1) << endl;

	double c, d;
	char op2;
	cout << "\n실수 연산식을 입력하세요: ";
	cin >> c >> op2 >> d;

	cout << "계산 결과: " << numO(c, d, op2) << endl;

	return 0;
}

int numO(int x, int y, char op)
{
	int result = 0;
	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		if (y) result = x / y;
		break;
	default:
		break;
	}	
	return result;
}
double numO(double x, double y, char op)
{
	double result = 0;
	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		if (y) result = x / y;
		break;
	default:
		break;
	}
	return result;
}