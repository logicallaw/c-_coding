#include <iostream>
using namespace std;
int main(void)
{
	/*
	[����] 2609�� �ִ������� �ּҰ���� | C++
	�˰���:��Ŭ��ũ ȣ����
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