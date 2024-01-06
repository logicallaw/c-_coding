#include <iostream>
using namespace std;
void printArray(int* arr, const int& size);
int* arrCopy(int* s,const int& size);
int main(void) {
	int size;
	cout << "배열의 크기를 입력하세요: ";
	cin >> size;
	int* source = new int[size];
	cout << "배열의 원소를 입력하세요: ";
	for (int i{ 0 }; i < size; i++)
		cin >> *(source + i);

	int* target = arrCopy(source, size);

	cout << "\nsource 배열: ";
	printArray(source, size);

	cout << "\ntarget 배열: ";
	printArray(target, size);
	
	delete[] target;
	delete[] source;
	return 0;
}
void printArray(int* arr, const int& size) {
	for (int i{ 0 }; i < size; i++)
		cout << *(arr + i) << " ";
}
int* arrCopy(int* s, const int& size) {
	int* temp = new int[size];
	for (int i{ 0 }; i < size; i++)
	{
		*(temp + i) = *(s + i);
		*(s + i) = i + 1;
	}
	return temp;
}