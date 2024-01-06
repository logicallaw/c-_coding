#include <iostream>
#include <array>
using namespace std;
void printArr(const array<array<int, 4>, 3>& param);
void printArr(const array<array<int, 4>, 3>& param) {
	for (const array<int, 4>&row : param)
	{
		for (const int& col : row)
			cout << col << " ";
		cout << endl;
	}
}

void reverse(const array<array<int, 4>, 3>& arr, array<array<int, 4>, 3>& crr);
void reverse(const array<array<int, 4>, 3>& arr, array<array<int, 4>, 3>& crr) {
	for (int i{ 0 }; i < 3; i++)
	{
		for (int j{ 0 }; j < 4; j++)
		{
			crr[i][j] = arr[2 - i][3 - j];
		}
	}
}

int main(void){
	array<array<int, 4>, 3> arr{ {{1,2,3,4},{5,6,7,8},{9,10,11,12} } };
	array<array < int, 4>,3> crr;
	cout << "orignal array\n";
	printArr(arr);

	reverse(arr, crr);

	cout << "\n\ncopied array\n";
	printArr(crr);

	return 0;
}
