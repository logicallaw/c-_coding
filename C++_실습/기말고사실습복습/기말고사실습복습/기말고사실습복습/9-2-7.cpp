#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void findDuplicates(int* p, const int& size);
int main(void) {
	srand(time(0));
	int size;
	cout << "배열의 크기를 입력해 주세요: ";
	cin >> size;

	int* nums = new int[size];

	for (int i{ 0 }; i < size; i++)
	{
		nums[i] = rand() % 10 + 1;
	}
	for (int i{ 0 }; i < size; i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;

	findDuplicates(nums, size);

	delete[] nums;
}

void findDuplicates(int* p, const int& size) {
	//2 3 5 5 3 1 0
	int n1[10]{ 0 };
	cout << "중복된 숫자: ";
	for (int i{ 0 }; i < size; i++) {
		if (*(n1 + *(p + i) - 1) == 0) //*(n1 + *(p[i] - 1) - 1) == 0
			*(n1 + *(p + i) - 1) = 1;
		else if (*(n1 + *(p + i) - 1) == 1)
		{
			cout << *(p + i) << " ";
			*(n1 + *(p + i) - 1) = 2;
		}
	}

}