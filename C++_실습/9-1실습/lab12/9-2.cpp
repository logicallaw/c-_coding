#include <iostream>
using namespace std;
void bubble_sort(int nums[]);
void swap(int* p1, int* p2);
int main(void) {
	int nums[6];
	int* pnums[6];

	cout << "Input 6 number: ";
	for (int& num : nums)
		cin >> num;

	cout << "\noriginal array" << endl;
	for (int& num : nums)
		cout<< num << " ";

	bubble_sort(nums);
	for (int i{ 0 }; i < 6; i++)
		pnums[i] = &nums[i];

	cout << "\npointer array" << endl;
	for (int* pnum : pnums)
		cout << *pnum << " ";

	return 0;

}
void bubble_sort(int nums[]) {
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