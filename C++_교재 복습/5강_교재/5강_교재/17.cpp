/*
num

*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned int num;
	unsigned int sum1 = 0, sum2 = 0, sum3 = 0;
	cout << "n의 값 입력: ";
	cin >> num;

	cout << "\nn의 값 = " << num << endl;

	unsigned int counter = 1;
	while (counter <= num )
	{
		sum1 += counter;
		sum2 += counter * counter;
		sum3 += counter * counter * counter;
		counter += 1;
	}
	cout << "sum1의 값: " << sum1 << endl;
	cout << "sum2의 값: " << sum2 << endl;
	cout << "sum3의 값: " << sum3 << endl;

	return 0;
}