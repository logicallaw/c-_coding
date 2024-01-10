#include <iostream>
using namespace std;
int fib(int num);
int main(void)
{
	int n;
	cin >> n;
	cout << fib(n);
	return 0;
}
int fib(int num)
{
	if (num == 0 || num == 1) return num;
	else return fib(num - 2) + fib(num - 1);
}