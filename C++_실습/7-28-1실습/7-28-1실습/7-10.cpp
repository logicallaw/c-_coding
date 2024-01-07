#include <iostream>
using namespace std;
int main(void)
{
	int nums[5];
	int numSum = 0;

	cout << "5개 정수를 입력하세요: ";
	for (int i{ 0 }; i < 5; i++)
		cin >> nums[i];
	cout << endl << "입력한 정수: ";
	for (int num : nums)
	{
		cout << num << " ";
		numSum += num;
	}
	cout << endl << "정수의 합: " << numSum << endl;
	cout << "평균: " << static_cast<double>(numSum) / 5.0 << endl;

	return 0;

}