#include <iostream>
using namespace std;
int main(void)
{
	int size;
	unsigned int num, num7;
	bool numBool = 0;

	cout << "������ ������ ���� ������ �Է��ϼ���: ";
	cin >> size;
	while (size < 1)
	{
		cout << "���� ������ �Է��ϼ���: ";
		cin >> size;
	}
	cout << endl;

	unsigned int counter{ 0 };
	while (counter < size)
	{
		cout << "������ �Է����ּ���: ";
		cin >> num;
		if (num % 7 == 0)
		{
			numBool = 1;
			num7 = num;
			break;
		}
		counter++;
	}

	cout << endl;
	if (numBool)
	{
		cout << num7 << "��/�� 7�� ���� �� �ֽ��ϴ�." << endl;
	}
	else
	{
		cout << "7�� ���� �� �ִ� ���ڰ� �����ϴ�." << endl;
	}

	return 0;
}