#include <iostream>
using namespace std;
int main(void) {
	int num = 5;
	int* p1 = &num;
	int* p2 = p1;
	cout << p1 << endl;
	cout << p2 << endl;
	cout << *p1 << endl;
	cout << *p2 << endl;
	cout << &p1 << endl;
	cout << &p2 << endl;

}