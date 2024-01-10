#include <iostream>
#include <cmath>
using namespace std;
int min(int* p, const int& size) {
	int result = abs(p[0] - p[1]);
	for (int i{ 0 }; i < size - 1; i++)
	{
		for (int j{ i + 1 }; j < size; j++)
		{
			int temp = abs(p[i] - p[j]);
			result = (result >= temp) ? temp : result;
		}
	}
	return result;
}
int main(void) {
	int size;
	cout << "�迭 ũ�⸦ �Է��ϼ���: ";
	cin >> size;

	int* nums = new int[size];
	cout << "�迭 ��Ҹ� �Է��ϼ���: ";
	for (int i{ 0 }; i < size; i++) {
		cin >> nums[i];
	}
	int numMin = min(nums, size);
	cout << "\n���� ���� ����: " << numMin;
	delete[] nums;

}