#include <iostream>
using namespace std;
int main(void)
{
	/*
	[백준] 2609번 최대공약수와 최소공배수 | C++
	알고리즘:유클리크 호제법
	*/
	unsigned int num1, num2;
	unsigned int num1num2;
	cin >> num1 >> num2;

	num1num2 = num1 * num2;
	while (num2 != 0)
	{
		unsigned int temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	cout << num1 << endl;
	cout << num1num2 / num1 << endl;
	return 0;
}