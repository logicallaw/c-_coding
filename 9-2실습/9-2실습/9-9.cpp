#include <iostream>
using namespace std;
int** matrixMutiplication(int** matrix1, int** matrix2, int rows1, int cols1, int cols2) {
	int** result = new int* [rows1]; //2차원 배열
	for (int i = 0; i < rows1; i++)
		result[i] = new int[cols2]; //rows1 by cols2 : result

	for (int i = 0; i < rows1; i++) { //rows1 by cols2 == i by j
		for (int j = 0; j < cols2; j++)
		{
			result[i][j] = 0; //default:0;
			for (int k = 0; k < cols1; k++) //k:cols1 0부터 cols-1까지/
				result[i][j] += matrix1[i][k] + matrix2[k][j];
		}
	}
	return result;
}

void printMatrix(int** matrix, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void freeMatrix(int** matrix, int rows) {
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
}

int main(void) {
	int rows1, cols1, rows2, cols2;
	cout << "첫 번째 행렬의 행 개수: ";
	cin >> rows1;
	cout << "첫 번째 행렬의 열 개수: ";
	cin >> cols1;
	cout << "두 번째 행렬의 행 개수: ";
	cin >> rows2;
	cout << "두 번째 행렬의 열 개수: ";
	cin >> cols2;

	int** matrix1 = new int* [rows1];
	int** matrix2 = new int* [rows2];

	cout << "\n첫 번째 행렬 입력: " << endl;
	for (int i{ 0 }; i < rows1; i++)
	{
		matrix1[i] = new int[cols1];
		for (int j{ 0 }; j < cols1; j++)
		{
			cout << "행 " << i + 1 << ", 열 " << j + 1 << ": ";
			cin >> matrix1[i][j];
		}
	}

	cout << "\n두 번째 행렬 입력: " << endl;
	for (int i{ 0 }; i < rows2; i++)
	{
		matrix2[i] = new int[cols2];
		for (int j{ 0 }; j < cols2; j++)
		{
			cout << "행 " << i + 1 << ", 열 " << j + 1 << ": ";
			cin >> matrix2[i][j];
		}
	}

	int** result = matrixMutiplication(matrix1, matrix2, rows1, cols1, cols2);

	cout << "\n첫 번째 행렬: " << endl;
	printMatrix(matrix1, rows1, cols1);
	cout << "두 번째 행렬: " << endl;
	printMatrix(matrix2, rows2, cols2);
	cout << "곱셈 결과: " << endl;
	printMatrix(result, rows1, cols2);

	freeMatrix(matrix1, rows1);
	freeMatrix(matrix2, rows2);
	freeMatrix(result, rows1);

	return 0;
}