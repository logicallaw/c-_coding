#include <iostream>
using namespace std;
int main(void)
{
	/*
	��Ŭ���� ȣ������ �̿��� �� ���� �ִ������� �ּҰ���� ���ϱ�
	*/
	unsigned int num1, num2;
	unsigned int num1num2;
	cout << "�� �ڿ����� �Է����ּ���: ";
	cin >> num1 >> num2;

	num1num2 = num1 * num2;
	while (num2 != 0)
	{
		unsigned int temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	cout << "\n�� �� num1�� num2�� �ִ�����: " << num1 << endl;
	cout << "\n�� �� num1�� num2�� �ּҰ����: " << (num1num2 / num1) << endl;
	return 0;
}