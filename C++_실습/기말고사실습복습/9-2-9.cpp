#include <iostream>
using namespace std;
void printMatrix(int** p, int& row, int& col);
int main(void) {
	int row1, col1;
	int row2, col2;
	cout << "첫 번째 행렬의 행 개수: ";
	cin >> row1;
	cout << "첫 번째 행렬의 열 개수: ";
	cin >> col1;
	cout << "두 번째 행렬의 행 개수: ";
	cin >> row2;
	cout << "두 번째 행렬의 열 개수: ";
	cin >> col2;

	//행렬 row를 생성합니다.
	int** matrix1 = new int* [row1];
	int** matrix2 = new int* [row2];

	//행렬 col를 생성합니다.
	for (int i{ 0 }; i < row1; i++)
		matrix1[i] = new int[col1];
	for (int i{ 0 }; i < row2; i++)
		matrix2[i] = new int[col2];


	//행렬 각 원소를 입력 받습니다.
	cout << "첫 번째 행렬 입력: " << endl;
	for (int i{ 0 }; i < row1; i++) {
		for (int j{ 0 }; j < col1; j++)
		{
			cout << "행 " << i + 1 << ", 열 " << j + 1 << ": ";
			cin >> matrix1[i][j];
		}
	}

	cout << "두 번째 행렬 입력: " << endl;
	for (int i{ 0 }; i < row2; i++) {
		for (int j{ 0 }; j < col2; j++)
		{
			cout << "행 " << i + 1 << ", 열 " << j + 1 << ": ";
			cin >> matrix2[i][j];
		}
		cout << endl;
	}
	cout << endl;

	//메모리 해제합니다.
	for (int i{ 0 }; i < row1; i++)
		delete[] matrix1[i];
}

void printMatrix(int** p, int& row, int& col);