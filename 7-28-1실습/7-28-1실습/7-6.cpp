#include <iostream>
using namespace std;
int main(void)
{
	const int SIZE = 10;
	int nums[SIZE];
	int cnt;
	cout << "������ ������ �Է����ּ���: ";
	cin >> cnt;
	cout << cnt << "���� ���ڸ� �Է��� �ּ���: ";
	
	for (int i{ 0 }; i < cnt; i++)
	{
		cin >> nums[i];
	}

	cout << endl << "�Է¹��� ���ڵ� �߿� 3�� ����� ������ �����ϴ�: ";

	for (int i{ 0 }; i < cnt; i++)
	{
		if (nums[i] % 3 == 0) cout << nums[i] << " ";
	}
	return 0;
}