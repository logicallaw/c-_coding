/*
���������ض�. ��, ������ �������.

*/

#include <iostream>
using namespace std;

void selection_sort(int nums[], int& size);
void swap(int* num1, int* num2);

int main(void) {
	int size;
	int nums[10];
	cout << "������ ������ �Է��ϼ���: ";
	cin >> size;
	cout << "������ �Է��ϼ���: ";
	for (int i{ 0 }; i < size; i++)
	{
		cin >> nums[i];
	}

	cout <<"\n���� �� �迭: ";
	for (int i{ 0 }; i < size; i++)
		cout << nums[i] << " ";
	selection_sort(nums, size);
	cout << "\n���� �� �迭: ";
	for (int i{ 0 }; i < size; i++)
		cout << nums[i] << " ";
	return 0;

}

void selection_sort(int nums[], int& size) {
	for (int i{ 0 }; i < size - 1; i++)
		for (int j{ 0 }; j < size - 1 - i; j++)
			if (nums[j] < nums[j + 1])
				swap(&nums[j], &nums[j + 1]);
}

void swap(int* num1, int* num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}