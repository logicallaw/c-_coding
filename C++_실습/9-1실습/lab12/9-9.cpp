#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(void) {
	string s;
	cout << "���ڷ� ������ ���ڿ��� �Է��ϼ���: ";
	cin >> s;
	//vector<int> nums(10, -1);
	vector<int> nums( 5,2);
	//array<int, 10> nums{ 1,2 };
	for (int& num : nums)
		cout << num << " ";
	cout << endl;
	int temp;
	for (int i{ 0 };i < s.length(); i++)
	{
		temp = *(s.begin() + i) - '0';
		if (nums[temp] == -1)
			nums[temp] = i;
	}

	for (int i{ 0 }; i < 10; i++)
		cout << "���� " << i << "�� ���� ��ġ: " << nums[i] << endl;
	
	return 0;
}