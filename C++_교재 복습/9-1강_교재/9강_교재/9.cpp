#include <iostream>
using namespace std;

int main(void) {
	int num = 5;
	int* p = &num;
	int** pp = &p;

	cout << &num << endl;
	cout << p << endl;
	cout << *pp << endl;
	cout << *(*pp) << endl; //5

	return 0;
}