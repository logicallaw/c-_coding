#include <iostream>
using namespace std;

long long fib(int n);

int main(void)
{

}

long long fib(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fib(n - 2) + fib(n - 1); //10 11;(8)+(9) (9)+(10);(
}