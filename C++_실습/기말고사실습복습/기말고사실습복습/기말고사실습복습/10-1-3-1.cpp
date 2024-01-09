#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void bubble_sort(vector<char*>& arr);
void swap(char*& p1, char*& p2);
int main(void) {
	int size;
	cout << "��� ���� �Է��� �ּ���: ";
	cin >> size;
	cin.ignore();

	vector<char*> arr;
	for (int i{ 0 }; i < size; i++) {
		char* temp = new char[20];
		cout << "�̸��� �Է��� �ּ���: ";
		cin.getline(temp, 20);
		arr.push_back(temp);
	}
	bubble_sort(arr);
	cout << endl;
	for (int i{ 0 }; i < size; i++)
	{
		cout << arr[i] << endl;
		delete[] arr[i];
	}
}

void bubble_sort(vector<char*>& arr) {
	for (int i{ 0 }; i < arr.size(); i++)
		for (int j{ 0 }; j < arr.size() - 1 - i; j++)
			if (strcmp(arr[j], arr[j + 1]) > 0)
				swap(arr[j], arr[j + 1]);
}

void swap(char*& p1, char*& p2) {
	char* temp = p1;
	p1 = p2;
	p2 = temp;
}