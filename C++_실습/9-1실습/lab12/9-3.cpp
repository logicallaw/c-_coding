#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int>& nums);
void swap(int* p1, int* p2);
int main(void) {
	vector<int> nums;
	vector<int*> pnums;

	int temp;
	cout << "Input 6 number: ";
	for (int i{ 0 }; i < 6; i++)
	{
		cin >> temp;
		nums.push_back(temp);
	}

	cout << "\noriginal vector" << endl;
	for (int& num : nums)
		cout << num << " ";

	bubble_sort(nums);
	for (int i{ 0 }; i < 6; i++)
		pnums.push_back(& nums[i]);

	cout << "\npointer vector" << endl;
	for (int* p : pnums)
		cout << *p << " ";

	return 0;

}
void bubble_sort(vector<int>& nums) {
	const int SIZE = 6;
	for (int i{ 0 }; i < SIZE - 1; i++)
		for (int j{ 0 }; j < SIZE - 1 - i; j++)
			if (nums[j] > nums[j + 1])
				swap(&nums[j], &nums[j + 1]);
}

void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}