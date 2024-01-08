#include <iostream>
using namespace std;
int* arrCopy(int* p, const int& size);
int main(void) {
	int size;
	cout << "배열의 크기를 입력하세요: ";
	cin >> size;
	int* nums = new int[size];
	cout << "배열의 원소를 입력하세요: ";
	for (int i{ 0 }; i < size; i++)
		cin >> *(nums + i);
	int* target = arrCopy(nums, size);

	cout << "\nsource 배열: ";
	for (int i{ 0 }; i < size; i++)
		cout << *(nums + i) << " ";
	cout << "\ntarget 배열: ";
	for (int i{ 0 }; i < size; i++)
		cout << *(target + i) << " ";

	delete[] nums;
	delete[] target; //동적할당되어서 arrCopy에서 생성된 배열 삭제 가능.
	
	return 0;
}
int* arrCopy(int* nums, const int& size) {
	int* target = new int[size];
	for (int i{ 0 }; i < size; i++) {
		*(target + i) = *(nums + i);
		*(nums + i) = i + 1;
	}
	return target;
}
/*
4
5 16 2 12
*/