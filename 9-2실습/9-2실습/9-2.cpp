#include <iostream>
using namespace std;
void print2Darr(int** p, const int& row, const int& col);
int main(void) {
	const int row = 3;
	const int col = 4;
	int** arr = new int* [row];
	int temp;

	cout << "Input:" << endl;
	for (int i{ 0 }; i < row; i++) {
		arr[i] = new int[col];
		for (int j{ 0 }; j < col; j++) {
			cin >> arr[i][j];
		}
	}
	cout << endl << "Output1:" << endl;
	print2Darr(arr, row, col);
	cout << endl << "Output2:" << endl;

	
	int* tmp = arr[0];
	arr[0] = arr[2];
	arr[2] = tmp;
 
	print2Darr(arr, row, col);

	for (int i{ 0 }; i < row; i++)
		delete[] arr[i];
	delete[] arr;
	return 0;
}

void print2Darr(int** p, const int& row, const int& col) {
	for (int i{ 0 }; i < row; i++)
	{
		for (int j{ 0 }; j < col; j++)
			cout << p[i][j] << " ";
		cout << endl;
	}
}