//vector
#include <iostream>
#include <vector>
using namespace std;
bool check(string& word, vector<int>& nums, double& result);
bool progress(string& word, vector<int>& nums, double& result);

int main(void) {
	int size;
	vector<int> nums;
	cout << "배열의 크기를 입력해주세요: ";
	cin >> size;
	cout << "배열을 입력해주세요: ";
	for (int i{ 0 }; i < size; i++)
	{
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}
	double result;
	string word;
	while (progress(word, nums, result)) {
	}
}
bool check(string& word ,vector<int>& nums, double& result) {
	bool status = true;
	if (word == "sum")
	{
		result = 0;
		for (int& num : nums)
			result += num;
	}
	else if (word == "average")
	{
		result = 0;
		for (int& num : nums)
			result += num;
		result /= nums.size();
	}
	else if (word == "max")
	{
		result = nums[0];
		for (int i{ 1 }; i < nums.size(); i++)
			result = (result <= nums[i]) ? nums[i] : result;
	}
	else if (word == "min")
	{
		result = nums[0];
		for (int i{ 1 }; i < nums.size(); i++)
			result = (result >= nums[i]) ? nums[i] : result;
	}
	else
	{
		status = false;
	}
	if (status)
	{
		cout << "배열의 " << word << "은(는) " << result << "입니다." << endl;
		return 1;
	}
	else
		return 0;
}
bool progress(string& word, vector<int>& nums, double& result) {
	cout << "구하려고 하는 값을 입력해주세요(sum/average/max/min): ";
	cin >> word;

	cout << endl;
	//check():올바른 문자 입력했는지 확인.
	if (check(word, nums, result)) 
		return 1;
	else 
		return 0;
}