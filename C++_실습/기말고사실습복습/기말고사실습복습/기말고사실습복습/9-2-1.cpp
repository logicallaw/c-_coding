#include <iostream>
using namespace std;
int main(void) {
	//int size;
	//cout << "�迭�� ũ�⸦ �Է��� �ּ���: ";
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
	cout << "pn:" << pn << endl; //�ּ�
	cout << "ps:" << ps << endl; //���ڿ�
	cout << "pn + 2:" << pn + 2 << endl; //�����Ϳ���, �ּ� ���
	cout << "ps + 2:" << ps + 2 << endl; //���ڿ� ��������, mjunho ���

	cout << "*(pn + 2):" << *(pn + 2) <<  endl; //3
	cout << "*(ps + 2):" << *(ps + 2) << endl; //m
 }