#include <iostream>
#include <array>
using namespace std;
void reverseArr(const array<int, 12>& arr, array<int, 12>& cpyarr);

void printArr(const array<int, 12>& arr);

void reverseArr(const array<int, 12>& arr, array<int, 12>& cpyarr) {
	for (int i{ 0 }; i < arr.size(); i++) 
		cpyarr[i] = arr[arr.size() - 1 - i];
	
}
void printArr(const array<int, 12>& arr) {
	int cnt = 1;
	for (const int& a : arr) {
		cout << a << " ";
		if (cnt % 4 == 0) cout << endl;
		cnt++;
	}
}
int main(void) {
	array<int,12> arr{ 1,2,3,4,5,6,7,8,9,10,11,12 };
	cout << "original array" << endl;
	printArr(arr);

	cout << endl << endl;

	array<int, 12> cpyarr;

	cout << "copied array" << endl;
	reverseArr(arr, cpyarr);
	printArr(cpyarr);

	return 0;
}