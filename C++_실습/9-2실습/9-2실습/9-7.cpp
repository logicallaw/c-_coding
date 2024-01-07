#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
void findDuplicates(int* arr, int& size);
int main(void) {
	srand(time(0));
	int size;
	cout << "배열의 크기를 입력하세요: ";
	cin >> size;
	int* arr = new int[size];
	for (int i{ 0 }; i < size; i++)
		*(arr + i) = rand() % 10 + 1;

	cout << "original array: ";
	for (int i{ 0 }; i < size; i++)
		cout << *(arr + i) << " ";
	cout << endl;
	findDuplicates(arr, size);
	delete[] arr;
}
void findDuplicates(int* arr, int& size) {
	vector<int> nums;
	for (int i{ 0 }; i < size; i++)
		nums.push_back(0);
	//int* nums = new int[size] {};
	cout << "중복된 숫자: ";
	for (int i{ 0 }; i < size; i++)
	{
		int num1 = *(arr + i);
		for (int j{ i + 1  }; j < size; j++)
		{
			int num2 = *(arr + j);
			if (nums[num1 - 1] == 0 && num1 == num2)
			{
				nums[num1 - 1] = 1;
				cout << num1 << " ";
			}
		}
	}
}