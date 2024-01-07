//built-in-array
#include <iostream>
using namespace std;
int main(void)
{
	int nums[100];
	int size;
	int findNumber;
	int counter = 0;
	//정수의 개수를 입력받습니다.
	cin >> size;

	//공백으로 구분된 정수들을 입력받아 배열에 저장합니다.
	for (int i{ 0 }; i < size; i++)
		cin >> nums[i];

	//찾고자하는 정수를 입력받습니다.
	cin >> findNumber;

	//배열을 순회하며 카운트합니다.
	for (int i{ 0 }; i < size; i++)
		if (nums[i] == findNumber)
			counter++;

	cout << counter;
	return 0;
}