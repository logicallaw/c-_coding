#include <iostream>
//실수의 덧셈, 뺄셈을 수행한다.
using namespace std;
int main(void)
{
	double a, b;
	cout << "a와 b를 입력해주세요: ";
	cin >> a >> b;
	cout << fixed;
	cout.precision(2);
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;

	return 0;

}