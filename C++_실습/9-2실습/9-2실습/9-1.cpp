#include <iostream>
using namespace std;
int main(void) {
	int size;
	cout << "�迭�� ũ�⸦ �Է��� �ּ���: ";
	cin >> size;
	int* pNums = new int[size];
	for (int i{ 0 }; i < size; i++)
		*(pNums + i) = i;
	for (int i{ 0 }; i < size; i++)
		cout << *(pNums + i) << " ";
	delete[] pNums;
}