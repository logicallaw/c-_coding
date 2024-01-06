#include <iostream>
using namespace std;
bool check(int num);
int main(void) {
	int row;
	cout << "N을 입력하세요: ";
	cin >> row;
	int** arr = new int* [row];

	int col = 0;
	cout << endl;
	for (int i{ 0 }; i < row; i++)
	{
		arr[i] = new int[col];
		cout << i << ": ";
		for (int j{ 0 }; j < col - 1; j++)
		{
			if (check(col - j))
				cout << col - j << " ";
		}
		col++;
		cout << endl;
	}
	for (int i{ 0 }; i < row; i++)
		delete[] arr[i];
	delete[] arr;
	return 0;
}
bool check(int num) {
	for (int i{ 2 }; i < num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}