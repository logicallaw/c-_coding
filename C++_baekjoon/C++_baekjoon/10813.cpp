//built-in-array
#include <iostream>
using namespace std;
void swap(int nums[], const int& index1, const int& index2);
int main(void) {
	int nums[100];
	int rangeOfNums;
	int cnt = 1;
	int size;
	int index1, index2;

	cin >> rangeOfNums >> size;

	//default:바구니에 적혀있는 번호와 같은 공이 들어있다.
	for (int i{ 0 }; i < rangeOfNums; i++)
		nums[i] = cnt++;

	for (int i{ 0 }; i < size; i++)
	{
		cin >> index1 >> index2;
		swap(nums, index1, index2);
	}
	
	for (int i{ 0 }; i < rangeOfNums; i++)
		cout << nums[i] << " ";
	return 0;
}

void swap(int nums[], const int& index1, const int& index2) {
	int temp = nums[index1 - 1];
	nums[index1 - 1] = nums[index2 - 1];
	nums[index2 - 1] = temp;
}