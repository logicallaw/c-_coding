#include <iostream>
using namespace std;
void reverse(int* pArr, int size);
int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	reverse(arr, 5);
	for (int& a : arr)
		cout << a << " ";
}

void reverse(int* pArr, int size) {
	int i = 0;
	int j = size - 1;
	while (i < size / 2)
	{
		int temp = *(pArr + i);
		*(pArr + i) = *(pArr + j);
		*(pArr + j) = temp;
		i++;
		j--;
	}
}