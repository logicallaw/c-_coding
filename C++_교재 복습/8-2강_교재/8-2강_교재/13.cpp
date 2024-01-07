#include <iostream>
#include <array>
using namespace std;
//pass-by-value
void printArray(array<int, 5> param) {
	for (int i{ 0 }; i < param.size(); ++i) param[i] *= 2;
	for (int element : param) cout << element << " ";
	cout << endl;
}
int main(void)
{
	array<int, 5> arr1{ 1,2,3,4,5 };
	printArray(arr1);

	for (int e : arr1) cout << e << " ";
	return 0;

}