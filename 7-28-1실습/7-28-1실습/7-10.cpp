#include <iostream>
using namespace std;
int main(void)
{
	int nums[5];
	int numSum = 0;

	cout << "5�� ������ �Է��ϼ���: ";
	for (int i{ 0 }; i < 5; i++)
		cin >> nums[i];
	cout << endl << "�Է��� ����: ";
	for (int num : nums)
	{
		cout << num << " ";
		numSum += num;
	}
	cout << endl << "������ ��: " << numSum << endl;
	cout << "���: " << static_cast<double>(numSum) / 5.0 << endl;

	return 0;

}