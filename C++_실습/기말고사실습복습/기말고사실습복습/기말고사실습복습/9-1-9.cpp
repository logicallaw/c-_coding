#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string numbers;
	cout << "���ڷ� ������ ���ڿ��� �Է��ϼ���: ";
	cin >> numbers;

	int nums[10]{-1,-1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 };
	for (int i{ 0 }; i < numbers.length(); i++) {
		int idx = *(numbers.begin() + i) - '0';
		if (nums[idx] == -1)
		{
			nums[idx] = i;
		}
	}
	for (int i{ 0 }; i < 10; i++)
		cout << "���� " << i << "�� ���� ��ġ: " << nums[i] << endl;
	return 0;
}