#include <iostream>
#include <array>
using namespace std;
void printArray(const array<array<int, 3>, 2>& a);
void printArrayAuto(const array<array<int, 3>, 2>& a);
int main(void) {
	array<array<int, 3>, 2> array1{ {{1,2,3},{4,5,6}} };
	array<array<int, 3>, 2> array2{ 1,2,3,4,5 };

	cout << "Values in array1 by row are: " << endl;
	printArray(array1);
	cout << "\nValues in array2 by row are: " << endl;

	return 0;
}
void printArray(const array<array<int, 3>, 2>& a) {
	for (const array<int, 3>&row : a)
	{
		for (const int& element : row)
		{
			cout << element << " ";
		}
		cout << endl;
	}
}

void printArrayAuto(const array<array<int, 3>, 2>& a) {
	for (const auto& row : a)
	{
		for (const auto& element : row)
		{
			cout << element << " ";
		}
		cout << endl;
	}
}