#include <iostream>
using namespace std;

void bubble_sort(int numbers[], int size);
void swap(int* a, int* b);

int main(void)
{
	const int SIZE = 6;
	int arr[SIZE];
	cout << "Input 6 number: ";
	for (int& a : arr)
		cin >> a;
	int sorted[SIZE];
	for (int i{ 0 }; i < SIZE; i++)
	{
		sorted[i] = arr[i];
	}
	bubble_sort(sorted, SIZE);

	int* pArr[SIZE];
	for (int i{ 0 }; i < SIZE; i++)
		for (int j{ 0 }; j < SIZE; j++)
			if (sorted[i] == arr[j])
				pArr[i] = &arr[j];
	cout << endl;

	cout << "original array" << endl;
	for (int& i : arr)
		cout << i << " ";
	cout << endl;

	cout << "pointer array" << endl;
	for (int* p : pArr)
		cout << *p << " ";
	cout << endl;
	return 0;

}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int numbers[], int size) {
	for (int i{ 0 }; i < size - 1; i++)
		for (int j{ 0 }; j < size - 1 - i; j++)
			if (numbers[j] > numbers[j + 1])
				swap(&numbers[j], &numbers[j + 1]);
}