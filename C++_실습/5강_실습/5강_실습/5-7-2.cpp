#include <iostream>
using namespace std;
int gcd_recursive(int a, int b);

int main(void)
{
	/*	
	������� ��Ŭ���� ȣ������ �̿��� �� ���� �ִ����� ���ϱ�
	�ð� ���⵵: O(logN)
	*/
	unsigned int num1, num2;
	cout << "�� �ڿ����� �Է����ּ���: ";
	cin >> num1 >> num2;

	cout << "\n�� �� num1�� num2�� �ִ�����: " << gcd_recursive(num1, num2) << endl;
}

int gcd_recursive(int a, int b)
{
	if (!b)
	{
		return a;
	}
	return gcd_recursive(b, a % b);
}