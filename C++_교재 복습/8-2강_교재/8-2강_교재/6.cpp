#include <iostream>
#include <array>
using namespace std;
int main(void)
{
	array<int,5> arr{ 0 };
	arr = { 1,2,3,4,5 };
	arr = { 1,2 };
	for (int e : arr)
		cout << e << " ";
	cout << endl << arr.at(1) << endl;
}