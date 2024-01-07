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
	int** arr = new int* [row]; //������ �迭 ����
	for (int i{ 0 }; i < row; i++)
	{
		col = i + 1;
		arr[i] = new int[col]; //�迭 ���� �� �ּ� ȹ��
		for (int j = 0; j < col; j++)
			arr[i][j] = i * (i + 1) / 2 + j + 1;
	}
	printArr(arr, row);
	for (int i = 0; i < row; i++)
		delete[] arr[i]; //1���� �迭 ��Ҹ� ����.
}
