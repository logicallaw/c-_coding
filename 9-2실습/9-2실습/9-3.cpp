//vector
#include <iostream>
#include <vector>
using namespace std;
bool check(string& word, vector<int>& nums, double& result);
bool progress(string& word, vector<int>& nums, double& result);

int main(void) {
	int size;
	vector<int> nums;
	cout << "�迭�� ũ�⸦ �Է����ּ���: ";
	cin >> size;
	cout << "�迭�� �Է����ּ���: ";
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
		cout << "�迭�� " << word << "��(��) " << result << "�Դϴ�." << endl;
		return 1;
	}
	else
		return 0;
}
bool progress(string& word, vector<int>& nums, double& result) {
	cout << "���Ϸ��� �ϴ� ���� �Է����ּ���(sum/average/max/min): ";
	cin >> word;

	cout << endl;
	//check():�ùٸ� ���� �Է��ߴ��� Ȯ��.
	if (check(word, nums, result)) 
		return 1;
	else 
		return 0;
}