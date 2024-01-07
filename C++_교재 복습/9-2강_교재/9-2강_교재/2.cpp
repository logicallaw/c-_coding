#include <iostream>
using namespace std;
int getSum(const int* p, int size);
int main(void) {
	int arr[5]{ 10,11,12,13,14 };
	cout << getSum(arr, 5);
}
int getSum(const int* p, int size) {
	int sum = 0;
	for (int i{ 0 }; i < size; i++)
		sum += *(p + i);
	return sum;
}