#include <iostream>
using namespace std;

int fib(int num);

int main(void)
{
	int num;
	cout << "숫자를 입력해주세요: ";
	cin >> num;

	cout << "fib(num): " << fib(num) << endl;

	return 0;
}

int fib(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fib(n - 2) + fib(n - 1);
}