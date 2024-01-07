#include <iostream>
using namespace std;
int main(void) {
	double a = 5;
	double* pa = &a;
	cout << sizeof(pa) << endl;
	cout << sizeof(*pa) << endl;
}