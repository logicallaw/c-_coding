#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(void) {
	int size;
	do {
		cout << "벡터의 크기를 입력하세요 (5 이상 10 이하): ";
		cin >> size;
	} while (size < 5 || size > 10);
	cout << endl;
	int num;
	int cnt = 1;
	vector<int> nums;
	for (cnt; cnt <= size; cnt++) {
		do {
			cout << cnt << "번째 정수를 입력하세요 (0 이상 100 이하): ";
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
	cout << "\n벡터의 최솟값: " << numMin;
	cout << "\n벡터의 최댓값: " << numMax << endl;
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