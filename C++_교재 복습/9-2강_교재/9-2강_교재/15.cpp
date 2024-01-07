#include <iostream>
using namespace std;
void printArr(int** p, int row) {
	for (int i = 0; i < row; i++)
	{
		int col = i + 1;
		for (int j = 0; j < col; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}

int main(void) {
	int row, col;
	cout << "input #rows: ";
	cin >> row;
	int** arr = new int* [row]; //포인터 배열 선언
	for (int i{ 0 }; i < row; i++)
	{
		col = i + 1;
		arr[i] = new int[col]; //배열 생성 및 주소 획득
		for (int j = 0; j < col; j++)
			arr[i][j] = i * (i + 1) / 2 + j + 1;
	}
	printArr(arr, row);
	for (int i = 0; i < row; i++)
		delete[] arr[i]; //1차원 배열 요소를 해제.
}
