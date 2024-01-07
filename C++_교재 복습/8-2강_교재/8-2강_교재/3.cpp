#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(void)
{
	array<int, 5> arr;
	for (size_t i{ 0 }; i < arr.size(); ++i)
	{
		arr[i] = 0;
	}
	cout << "Element" << setw(10) << "Value" << endl;
	for (size_t i{ 0 }; i < arr.size(); ++i)
	{
		cout << setw(7) << i << setw(10) << arr[i] << endl;
	}
	return 0;
}