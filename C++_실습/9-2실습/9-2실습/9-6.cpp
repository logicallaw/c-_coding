#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
	int size;
	cout << "배열 크기를 입력하세요: ";
	cin >> size;

	int* p = new int[size];
	cout << "배열 요소를 입력하세요: ";
	for (int i{ 0 }; i < size; i++)
		cin >> *(p + i);

	int result = abs(*p - *(p + 1));

	for (int i{ 0 }; i < size; i++) {
		int std = *(p + i);
		for (int j{ i + 1 }; j < size; j++)
		{
			int tmp = *(p + j);
			result = (abs(std - tmp) <= result) ? abs(std - tmp) : result;
		}
	}
	cout << endl << "가장 작은 차이: " << result;

	delete[] p;
	return 0;

}