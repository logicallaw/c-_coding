#include <iostream>
//두 정수를 받아 사칙연산을 수행한다.
using namespace std;
int main(void)
{
	int a, b;
	cout << "두 정수 입력: ";
	cin >> a >> b;
	cout << endl;
	cout << "num1 + num2 = " << a + b << endl;
	cout << "num1 - num2 = " << a - b << endl;
	cout << "num1 * num2 = " << a * b << endl;
	cout << "num1 / num2 = " << a / b << endl;
	cout << "num1 % num2 = " << a % b << endl;

	return 0;
}