/*
����size�� ������ �Է¹޴´�.
size�� ����num�� �Է¹޴´�.
7�� ��� �ִ��� ����Ѵ�.

int size
unsigned int num

��
int�� size(�ݺ������� ���� ���� üũ)
cout << 
cin >> size
while (size<1)
	cout <<
	cin >>

bool numBool = 0;
for (unsigned int counter {0}; counter < size; counter++)
	cout 
	cin >> num
	if (num % 7 == 0)
		numBool = 1;
	(else)
*/
#include <iostream>
using namespace std;
int main(void)
{
	int size;
	unsigned int num,num7;
	bool numBool = 0;

	cout << "������ ������ ���� ������ �Է��ϼ���: ";
	cin >> size;
	while (size < 1)
	{
		cout << "���� ������ �Է��ϼ���: ";
		cin >> size;
	}
	cout << endl;

	for (unsigned int counter{ 0 }; counter < size; counter++)
	{
		cout << "������ �Է����ּ���: ";
		cin >> num;
		if (num % 7 == 0)
		{
			numBool = 1;
			num7 = num;
			break;
		}
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