#include <iostream>
using namespace std;
void printArr(int** p, int row, int col) {
	for (int i{ 0 }; i < row; i++)
	{
		for (int j{ 0 }; j < col; j++)
			cout << p[i][j] << " ";
		cout << endl;
	}
}

int main(void) {
	int row, col;
	cout << "input #rows and #columns: ";
	cin >> row >> col;
	int** arr = new int* [row];

	cout << endl;
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
		for (int j = 0; j < col; j++)
			arr[i][j] = i * col + j + 1;
	}
	printArr(arr, row, col);

	for (int i = 0; i < row; i++)
		delete[] arr[i];
	delete[] arr;
}