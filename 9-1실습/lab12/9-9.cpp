#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(void) {
	string s;
	cout << "숫자로 구성된 문자열을 입력하세요: ";
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
		cout << "숫자 " << i << "의 등장 위치: " << nums[i] << endl;
	
	return 0;
}