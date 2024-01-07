#include <iostream>
using namespace std;
int main(void) {
	void* p;

	double y = 5.99;
	p = &y;
	cout << &y << endl;
	cout << p << endl;
	cout << static_cast<double*>(p) << endl;

	void* p1 = &y;
	cout << p1 << endl;
	cout << *(static_cast<int*>(p1)) << endl;
}