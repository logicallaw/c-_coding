#include <iostream>
using namespace std;
int main(void)
{
	/*
	��Ŭ���� ȣ������ �̿��� �� ���� �ִ����� ���ϱ�
	�ð� ���⵵: O(logN)
	*/
	unsigned int num1, num2;
	cout << "�� �ڿ����� �Է����ּ���: ";
	cin >> num1 >> num2;

	while (num2 != 0)
	{
		unsigned int temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	cout << "\n�� �� num1�� num2�� �ִ�����: " << num1 << endl;

	return 0;
}