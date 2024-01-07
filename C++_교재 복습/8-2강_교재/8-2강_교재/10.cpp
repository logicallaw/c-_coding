#include <iostream>
#include <array>
using namespace std;
void staticArrayInit();
void automaticArrayInit();
void staticArrayInit() {
	static array<int, 3> array1;
	cout << "\nValues on entering staticArrayInit:\n";
	for (size_t i{ 0 }; i < array1.size(); ++i)
	{
		cout << "array1[" << i << "] = " << array1[i] << "  ";
	}
	cout << "\nValues on exiting staticArrayInit:\n";
	for (size_t j{ 0 }; j < array1.size(); ++j)
	{
		cout << "array1[" << j << "] = " << (array1[j] += 5) << "  ";
	}
}
void automaticArrayInit() {
	array<int, 3> array2{ 1, 2 ,3 };
	cout << "\nValues on entering automaticArrayInit:\n";
	for (size_t i{ 0 }; i < array2.size(); ++i)
	{
		cout << "array1[" << i << "] = " << array2[i] << "  ";
	}
	cout << "\nValues on exiting automaticArrayInit:\n";
	for (size_t j{ 0 }; j < array2.size(); ++j)
	{
		cout << "array1[" << j << "] = " << (array2[j] += 5) << "  ";
	}
}
int main(void)
{
	cout << "First" << endl;
	staticArrayInit();
	automaticArrayInit();
	cout << "Second" << endl;
	staticArrayInit();
	automaticArrayInit();
	return 0;
}