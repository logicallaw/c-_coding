#include <iostream>
using namespace std;
int main(void)
{
	
	int size, temp;
	int ary[10];
	cout << "ũ�⸦ �Է��ϼ���(1~10) : ";
	cin >> size;

	cout << endl <<size << "���� ���ڸ� �Է��ϼ���: ";
	for (int i{ 0 }; i < size; i++)
	{
		cin >> temp;
		ary[i] = temp;
	}

	cout << "�Է��� ���ڵ��� �Ųٷ� ���: ";
	for (int i{ size - 1 }; i >= 0; i--)
		cout << ary[i] << "   ";
	return 0;
}