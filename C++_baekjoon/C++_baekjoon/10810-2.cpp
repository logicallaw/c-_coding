//vector
#include <iostream>
#include <vector>
using namespace std;
void progress(int& rangeFirst, const int& rangeSecond, const int& inputNum, vector<int>& nums);
int main(void) {
	vector<int> nums;
	int	rangeOfNums;
	int size;
	int rangeFirst, rangeSecond;
	int inputNum;

	//nums �迭�� ���̿� �Է�Ƚ���� �����մϴ�.
	cin >> rangeOfNums >> size;

	//nums�迭�� default������ 0�� �ֽ��ϴ�.
	for (int i{ 0 }; i < rangeOfNums; i++)
		nums.push_back(0);

	/*
	�Է�Ƚ�� ��ŭ ���� ���� �ֽ��ϴ�.
	�̶�, ��Ģ�� ������ ���� ��ȿ�ϱ� ������,
	������ ���� ������ ������� �׻� ���� �����ϴ�.
	*/
	for (int i{ 0 }; i < size; i++)
	{
		cin >> rangeFirst >> rangeSecond >> inputNum;
		progress(rangeFirst, rangeSecond, inputNum, nums);
	}

	for (int i{ 0 }; i < rangeOfNums; i++)
		cout << nums[i] << " ";
}
void progress(int& rangeFirst, const int& rangeSecond, const int& inputNum, vector<int>& nums) {
	for (; rangeFirst <= rangeSecond; rangeFirst++)
		nums[rangeFirst - 1] = inputNum;
}