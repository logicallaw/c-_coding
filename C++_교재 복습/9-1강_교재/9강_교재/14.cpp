#include <iostream>
using namespace std;
void bubble_sort(int nums[], int size);
void swap(int& num1, int& num2);

int main(void) {
	int nums[10] = {5,6,2,3,1,8,10,9,7,4};
	bubble_sort(nums, 10);
	for (int& num : nums)
		cout << num << " "; //1 2 3 4 5 6 7 8 9 10
}

void bubble_sort(int nums[], int size) {
	for (int i{ 0 }; i < size - 1; i++)
		for (int j{ 0 }; j < size - 1 - i; j++)
			if (nums[j] > nums[j + 1])
				swap(nums[j], nums[j + 1]);
}
void swap(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}