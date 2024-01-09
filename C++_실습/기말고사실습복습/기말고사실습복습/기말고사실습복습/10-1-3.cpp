#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void bubble_sort(vector<char*>& arr);
void swap(char* p1, char* p2);
int main(void) {
	cout << "사람 수를 입력해 주세요: ";
	int size;
	cin >> size;
	cin.ignore();

	vector<char*> arr;
	for (int i{ 0 }; i < size; i++)
	{
		char* temp = new char[20];
		cout << "이름을 입력해 주세요: ";
		cin.getline(temp, 20);
		arr.push_back(temp);
	}
	//cout << arr[0] << arr[1] << arr[2] << endl;
	bubble_sort(arr);

	cout << endl;
	for (int i{ 0 }; i < size; i++)
	{
		cout << arr[i] << endl;
		delete[] arr[i];
	}
}
void bubble_sort(vector<char*>& arr) {
	for (int i{ 0 }; i < arr.size() ; i++)
		for (int j{ 0 }; j < arr.size() - 1 - i; j++)
			if(strcmp(arr[j], arr[j+1]) > 0)
				swap(arr[j], arr[j + 1]);
}

void swap(char* p1, char* p2) {
	//cout << p1 << "|" << p2 << endl;
	char* temp = p1;
	p1 = p2;
	p2 = temp;
}

/*
3
dlwlrma
wook lee
pby
*/