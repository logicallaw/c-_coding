/*
10���� ���� �Է¹޾� �迭 ����
��, ���, �ּ�, �ִ븦 ���ٿ� ���ļ� ����Ѵ�.
*/
#include <iostream>
using namespace std;
int main(void)
{
	int nums[10];
	int temp, numSum, numMin, numMax;
	double numAvg;
	cin >> temp;
	nums[0] = temp;
	numSum = temp;
	numMin = temp;
	numMax = temp;
	for (int i{ 1 }; i < 10; i++)
	{
		cin >> temp;
		nums[i] = temp;
		numSum += temp;
		numMin = (numMin >= temp) ? temp : numMin;
		numMax = (numMax <= temp) ? temp : numMax;
	}
	numAvg = static_cast<double>(numSum) / 10;
	cout << endl << "�հ�: " << numSum << endl;
	cout << "���: " << numAvg << endl;
	cout << "�ּڰ�: " << numMin << endl;
	cout << "�ִ�: " << numMax;

	return 0;
}