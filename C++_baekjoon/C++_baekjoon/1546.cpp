//built-in-array
#include <iostream>
#include <iomanip>
using namespace std;

double findMax(double nums[], const int& size);

int main(void) {
	double nums[1000];
	int size;

	//시험 본 과목의 개수를 입력 받아 배열의 크기를 지정합니다.
	cin >> size;

	//성적을 입력 받습니다.
	for (int i{ 0 }; i < size; i++) 
		cin >> nums[i];

	//성적 중 최댓값을 찾습니다.
	double numMax = findMax(nums, size);

	//새로운 성적으로 바꾸어 다 더합니다.
	double sumNums = 0;
	for (int i{ 0 }; i < size; i++)
		sumNums += (nums[i] * 100 ) / numMax;

	cout << fixed << setprecision(3) << sumNums / size;

	return 0;
}
double findMax(double nums[], const int& size) {
	double numMax = nums[0];
	for (int i{ 0 }; i < size; i++)
		numMax = (numMax <= nums[i]) ? nums[i] : numMax;
	return numMax;
}