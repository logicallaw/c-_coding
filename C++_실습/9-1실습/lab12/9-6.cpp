#include <iostream>
#include <vector>
using namespace std;
void bubble_sorted(vector<int>& param, int& size);
void swap(int* p1, int* p2);
int main(void) {
	int size;
	cout << "������ ũ�⸦ �Է����ּ���: ";
	cin >> size;

	cout << "������ ������ �Է����ּ���: ";
	int temp;

	vector<int> v1;
	for (int i{ 0 }; i < size; i++)
	{
		cin >> temp;
		v1.push_back(temp);
	}
	bubble_sorted(v1, size);
	cout << endl << "���ĵ� ����" << endl;
	for (int& v : v1)
		cout << v << " ";
	return 0;
}

void bubble_sorted(vector<int>& param, int& size) {
	for (int i{ 0 }; i < size - 1; i++)
		for (int j{ 0 }; j < size - 1 - i; j++)
			if (param[j] > param[j + 1])
				swap(&param[j], &param[j + 1]);
}

void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}