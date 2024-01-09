#include <iostream>
#include <vector>
using namespace std;
int getMin(const vector<int>& nums);
int getMax(const vector<int>& nums);
int main(void) {
	int size;
	do {
		cout << "벡터의 크기를 입력하세요 (5 이상 10 이하): ";
		cin >> size;
	} while (size < 5 || size >10);
	cout << endl;

	vector<int> nums;

	int num;
	for (int i{ 0 }; i < size; i++) {
		cout << i + 1 << "번째 정수를 입력하세요 (0 이상 100 이하): ";
		cin >> num;
		if (num < 0 || num >100) i--;
		else nums.push_back(num);
	}
	cout << endl;
	cout << "벡터의 최솟값: " << getMin(nums) << endl;
	cout << "벡터의 최댓값: " << getMax(nums) << endl;
	return 0;
}
int getMin(const vector<int>& nums) {
	int min = nums[0];
	for (int i{ 1 }; i < nums.size(); i++)
		min = (min >= nums[i]) ? nums[i] : min;
	return min;
}
int getMax(const vector<int>& nums) {
	int max = nums[0];
	for (int i{ 1 }; i < nums.size(); i++)
		max = (max <= nums[i]) ? nums[i] : max;
	return max;
}