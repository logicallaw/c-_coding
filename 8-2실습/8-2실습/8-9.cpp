#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(void) {
	int size;
	do {
		cout << "������ ũ�⸦ �Է��ϼ��� (5 �̻� 10 ����): ";
		cin >> size;
	} while (size < 5 || size > 10);
	cout << endl;
	int num;
	int cnt = 1;
	vector<int> nums;
	for (cnt; cnt <= size; cnt++) {
		do {
			cout << cnt << "��° ������ �Է��ϼ��� (0 �̻� 100 ����): ";
			cin >> num;
		} while (num < 0 || num > 100);
		nums.push_back(num);
	}
	int numMin = nums[0];
	int numMax = nums[0];
	for (int i{ 1 }; i < nums.size(); i++)
	{
		int num = nums[i];
		numMin = (numMin <= num) ? numMin : num;
		numMax = (numMax >= num) ? numMax : num;
	}
	cout << "\n������ �ּڰ�: " << numMin;
	cout << "\n������ �ִ�: " << numMax << endl;
	array<int, 3> arr{};
	int ss[3]{};
	for (int& s : ss)
	{
		s++;
		cout << s << "|";
	}
	cout << endl;
	for (int a: arr)
		cout << a << "|";
	for (int num : nums)
	{
		num++;
		cout << num << "|";
	}
	for (int num : nums)
		cout << num << "|";
	cout << endl;
	return 0;

}