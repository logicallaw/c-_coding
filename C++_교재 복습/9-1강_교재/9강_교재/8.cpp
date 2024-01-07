#include <iostream>
using namespace std;
int main(void) {
	int value = 5;
	const int cValue = 16;

	int* p1 = &value;
	const int* p2 = &cValue;
	cout << *p2 << endl; //16
	p2 = &value;
	cout << *p2 << endl; //5
	value++;
	(*p1)++; //value = 7;
	//(*p2)++; //역참조 연산 불가능



}