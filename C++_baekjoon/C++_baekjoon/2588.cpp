/*
unsigned int ���ڸ� �ڿ��� �ΰ��� �Է¹޴´�.
cin >> a >> b;
cout << a * (temp)
temp = b % 10
b /= 10; //38,3,0

for (cnt;3��)
	temp = b % 10; 5,8,3
	cout << a * temp;
	b /= 10;
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	unsigned int num1, num2;
	int a;
	int temp, numSum = 0;
	cin >> num1 >> num2;
	for (unsigned int cnt{ 0 }; cnt < 3; cnt++)
	{
		temp = num2 % 10;
		numSum += num1 * temp * pow(10,cnt);
		cout << num1 * temp << endl;
		num2 /= 10;
	}
	cout << numSum;
	return 0;
}