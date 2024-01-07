#include <iostream>
using namespace std;
int main(void) {
	int a = 5;
	int b = 16;

	int* p1 = &a;
	p1 = &b;
	*p1 -= 4;
	cout << *p1 << endl;
	cout << b << endl << endl;

	int* const p2 = &a;
	*p2 += 4;
	cout << *p2 << endl;
	cout << a << endl << endl;

	const int* p3 = &b;
	p3 = &a;
	const int* const p4 = &b;

	
}