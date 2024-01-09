#include <iostream>
using namespace std;
int main(void) {
	//int size;
	//cout << "배열의 크기를 입력해 주세요: ";
	//cin >> size;
	//int* nums = new int[size];
	//for (int i{ 0 }; i < size; i++) {
	//	*(nums + i) = i; 
	//}
	//for (int i{ 0 }; i < size; i++) {
	//	cout << *(nums + i) << " ";
	//}

	//delete[] nums;
	int nums[10]{ 1,2,3 };
	char str[10] = "kimjunho";
	int* pn = nums;
	char* ps = str;
	cout << "pn:" << pn << endl; //주소
	cout << "ps:" << ps << endl; //문자열
	cout << "pn + 2:" << pn + 2 << endl; //포인터연산, 주소 출력
	cout << "ps + 2:" << ps + 2 << endl; //문자열 길이지정, mjunho 출력

	cout << "*(pn + 2):" << *(pn + 2) <<  endl; //3
	cout << "*(ps + 2):" << *(ps + 2) << endl; //m
 }