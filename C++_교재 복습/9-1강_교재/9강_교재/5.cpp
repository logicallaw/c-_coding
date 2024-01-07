#include <iostream>
using namespace std;
int main(void) {
	int a = 5;
	cout << a << endl;
	cout << &a << endl;

	int* p1 = &a;
	cout << *p1 << endl;
	cout << (*p1)++ << endl; 
	cout << a << endl;
}