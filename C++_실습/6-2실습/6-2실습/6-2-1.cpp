#include <iostream>
using namespace std;

int fib(int num);

int main(void)
{
	int num;
	cout << "���ڸ� �Է����ּ���: ";
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