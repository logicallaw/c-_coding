//array
#include <iostream>
#include <array>
using namespace std;
void progress(int& rangeFirst, const int& rangeSecond, const int& inputNum, array<int,100>& nums);
int main(void) {
	//nums�迭 ����� default:0
	array<int,100> nums{};
	int	rangeOfNums;
	int size;
	int rangeFirst, rangeSecond;
	int inputNum;

	//nums �迭�� ���̿� �Է�Ƚ���� �����մϴ�.
	cin >> rangeOfNums >> size;

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
void progress(int& rangeFirst, const int& rangeSecond, const int& inputNum, array<int,100>& nums) {
	for (; rangeFirst <= rangeSecond; rangeFirst++)
		nums[rangeFirst - 1] = inputNum;
}