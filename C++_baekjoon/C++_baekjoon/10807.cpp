//built-in-array
#include <iostream>
using namespace std;
int main(void)
{
	int nums[100];
	int size;
	int findNumber;
	int counter = 0;
	//������ ������ �Է¹޽��ϴ�.
	cin >> size;

	//�������� ���е� �������� �Է¹޾� �迭�� �����մϴ�.
	for (int i{ 0 }; i < size; i++)
		cin >> nums[i];

	//ã�����ϴ� ������ �Է¹޽��ϴ�.
	cin >> findNumber;

	//�迭�� ��ȸ�ϸ� ī��Ʈ�մϴ�.
	for (int i{ 0 }; i < size; i++)
		if (nums[i] == findNumber)
			counter++;

	cout << counter;
	return 0;
}