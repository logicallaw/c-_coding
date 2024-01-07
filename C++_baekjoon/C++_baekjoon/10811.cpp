#include <iostream>
using namespace std;
void swap(int& num1, int& num2);

int main(void) {
	int nums[100];
	int rangeOfNums;
	int size;
	int index1, index2;

	cin >> rangeOfNums >> size;

	//nums배열의 크기만큼 바구니를 생성합니다.
	for (int i{ 0 }; i < rangeOfNums; i++)
		nums[i] = i + 1;

	//사용자 index 범위를 받습니다.
	for (int i{ 0 }; i < size; i++)
	{
		cin >> index1 >> index2;
		//해당 index만큼 swap합니다.
		while (index1 <= index2)
		{
			for (int j{ index1 }; j < index2; j++)
				swap(nums[j - 1], nums[j]);
			index2--; //swap하면서 범위를 줄여갑니다.
		}
	}

	//출력합니다.
	for (int i{ 0 }; i < rangeOfNums; i++)
		cout << nums[i] << " ";
	return 0;
}

void swap(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}