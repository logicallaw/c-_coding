#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void swap(char*& a, char*& b) {
	cout << "swap before:" << a << "|" << b << endl;
	char* imsi = a;
	a = b;
	b = imsi;
	cout << "swap after: " << a << "|" << b << endl;
}

void bubble_sort(vector<char*>& arr) {
	for (int i{ 0 }; i < arr.size() ; i++) {
		for (int j{ 0 }; j < arr.size() - 1 - i; j++)
			if (strcmp(arr[j], arr[j + 1]) > 0)
			{
				cout << "run swap:" << arr[j] << "|" << arr[j + 1] << endl;
				swap(arr[j], arr[j + 1]);
			}
	}
}
int main(void) {
	int size;
	vector<char*> v;
	cout << "사람 수를 입력해 주세요: ";
	cin >> size;

	cin.ignore();

	char* str;
	for (int i{ 0 }; i < size; i++)
	{
		str = new char[20];
		cout << "이름을 입력해 주세요: ";
		cin.getline(str, 20);
		v.push_back(str);
	}
	


	
	bubble_sort(v);
	cout << endl;
	for (char* element : v)
		cout << element << endl;

	for (int i{ 0 }; i < size; i++)
		delete[] v[i];
	delete[] str;
	return 0;
}