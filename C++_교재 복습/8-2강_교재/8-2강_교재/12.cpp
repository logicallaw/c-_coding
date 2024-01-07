#include <iostream>
#include <array>
using namespace std;
//pass-by-reference
void printArray(const array<int, 5>& param) {
	for (size_t i{ 0 }; i < param.size(); ++i)
	{
		cout << param[i] << " ";
	}
	cout << endl;
	for (int e : param)
		cout << e << " ";
	cout << endl;
}
int main(void)
{
	array<int, 5> arr{1,2,3,4,5};
	printArray(arr);
}