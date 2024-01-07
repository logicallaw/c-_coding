//vector
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double findMax(vector<double>& nums, const int& size);

int main(void) {
	vector<double> nums;
	int size;

	//���� �� ������ ������ �Է� �޾� �迭�� ũ�⸦ �����մϴ�.
	cin >> size;

	//������ �Է� �޽��ϴ�.
	double temp;
	for (int i{ 0 }; i < size; i++)
	{
		cin >> temp;
		nums.push_back(temp);
	}

	//���� �� �ִ��� ã���ϴ�.
	double numMax = findMax(nums, size);

	//���ο� �������� �ٲپ� �� ���մϴ�.
	double sumNums = 0;
	for (int i{ 0 }; i < size; i++)
		sumNums += (nums[i] * 100) / numMax;

	cout << fixed << setprecision(3) << sumNums / size;

	return 0;
}
double findMax(vector<double>& nums, const int& size) {
	double numMax = nums[0];
	for (int i{ 0 }; i < size; i++)
		numMax = (numMax <= nums[i]) ? nums[i] : numMax;
	return numMax;
}