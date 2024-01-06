/*
10개의 숫자 입력받아 배열 생성
합, 평균, 최소, 최대를 각줄에 걸쳐서 출력한다.
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
	cout << endl << "합계: " << numSum << endl;
	cout << "평균: " << numAvg << endl;
	cout << "최솟값: " << numMin << endl;
	cout << "최댓값: " << numMax;

	return 0;
}