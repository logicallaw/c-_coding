#include <iostream>
using namespace std;

int sum(int n);
int factorial(int n);

int main(void)
{
	cout << "sum(0) = " << sum(0) << endl;
	cout << "factorial(1) = " << factorial(1) << endl;

	cout << "sum(3) = " << sum(3) << endl;
	cout << "factorial(3) = " << factorial(3) << endl;

	cout << "sum(7) = " << sum(7) << endl;
	cout << "factorial(7) = " << sum(7) << endl;

	return 0;
}

int sum(int n)
{
	if (n <= 0)
		return 0;
	return n + sum(n - 1);
}

int factorial(int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}