/*
num

*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned int num;
	unsigned int sum1 = 0, sum2 = 0, sum3 = 0;
	cout << "n�� �� �Է�: ";
	cin >> num;

	cout << "\nn�� �� = " << num << endl;

	unsigned int counter = 1;
	while (counter <= num )
	{
		sum1 += counter;
		sum2 += counter * counter;
		sum3 += counter * counter * counter;
		counter += 1;
	}
	cout << "sum1�� ��: " << sum1 << endl;
	cout << "sum2�� ��: " << sum2 << endl;
	cout << "sum3�� ��: " << sum3 << endl;

	return 0;
}