/*
���� ���� �Է� �޾� 1���� �Է¹��� �������� �� ���ϴ� ���α׷�

�Լ�
func1(num)
if (num < 1) return 0;
else return num + func1(num-1)
*/
#include <iostream>
using namespace std;

int numSum(int num);

int main(void)
{
	int number;
	cout << "���� ������ �Է��ϼ���: ";
	cin >> number;
	cout << "1���� " << number << "������ ��: " << numSum(number) << endl;

	return 0;
}

int numSum(int num)
{
	if (num < 1) return 0;
	else return num + numSum(num - 1);
}