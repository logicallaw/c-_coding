#include <iostream>
#include <array>
using namespace std;
int main(void) {
	array<int, 10> nums;
	cout << "�������� ù�װ� ���� �Է����ּ���: ";
	int a, s;
	cin >> a >> s;
	nums[0] = a;
	for (int i{ 1 }; i < 10; i++)
		nums[i] = s * nums[i - 1];
	cout << "Ȯ���� ������ ���� �Է��� �ּ���: ";
	int index;
	cin >> index;
	cout << "\n" << index << "��° ���� " << nums[index - 1] << "�Դϴ�.";

	return 0;
}