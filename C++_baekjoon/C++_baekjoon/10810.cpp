//built-in-array
#include <iostream>
using namespace std;
void progress(int& rangeFirst, const int& rangeSecond, const int& inputNum, int nums[]);
int main(void) {
	//nums배열 요소의 default:0
	int nums[100] {}; 
	int	rangeOfNums;
	int size;
	int rangeFirst, rangeSecond;
	int inputNum;

	//nums 배열의 길이와 입력횟수를 저장합니다.
	cin >> rangeOfNums >> size;

	/*
	입력횟수 만큼 공을 집어 넣습니다.
	이때, 규칙은 마지막 공만 유효하기 때문에,
	기존에 공의 유무와 관계없이 항상 공을 덮어씌웁니다.
	*/
	for (int i{ 0 }; i < size; i++)
	{
		cin >> rangeFirst >> rangeSecond >> inputNum;
		progress(rangeFirst, rangeSecond, inputNum, nums);
	}

	for (int i{ 0 }; i < rangeOfNums; i++)
		cout << nums[i] << " ";
}
void progress(int& rangeFirst, const int& rangeSecond, const int& inputNum, int nums[]) {
	for (; rangeFirst <= rangeSecond; rangeFirst++) 
		nums[rangeFirst - 1] = inputNum;
}