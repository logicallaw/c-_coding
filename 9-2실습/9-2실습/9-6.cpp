#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
	int size;
	cout << "�迭 ũ�⸦ �Է��ϼ���: ";
	cin >> size;

	int* p = new int[size];
	cout << "�迭 ��Ҹ� �Է��ϼ���: ";
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
	cout << endl << "���� ���� ����: " << result;

	delete[] p;
	return 0;

}