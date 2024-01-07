#include <iostream>
using namespace std;
void print(int(*)[4], int);
int main(void) {
	int matrix[3][4] = { {10,11,12,13},{14,15,16,17},{18,19,20,21} };
	print(matrix, 3);
	cout << print;
}
void print(int(*m)[4], int rows) {
	for (int i{ 0 }; i < rows; i++)
	{
		for (int j{ 0 }; j < 4; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}