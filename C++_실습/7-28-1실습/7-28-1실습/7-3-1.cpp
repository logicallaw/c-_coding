#include <iostream>
using namespace std;
int main(void)
{
	const int SIZE = 10;
	int nums[SIZE];

	int temp, numSum = 0, numMin, numMax;
	double numAvg;
	//1 2 3 4 5 6 7 8 9 10
	for (int& r: nums) //&nums[i]
	{
		cin >> r;
	}
	numMin = nums[0];
	numMax = nums[0];
	for (int value : nums)
	{
		numSum += value;
		numMin = (numMin <= value) ? numMin : value;
		numMax = (numMax >= value) ? numMax : value;
	}
	numAvg = static_cast<double>(numSum) / 10;
	cout << endl << "�հ�: " << numSum << endl;
	cout << "���: " << numAvg << endl;
	cout << "�ּڰ�: " << numMin << endl;
	cout << "�ִ�: " << numMax;

	return 0;

}