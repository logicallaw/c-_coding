#include <iostream>
using namespace std;
int main(void) {
	int* a = new int[2] {};
	//cout << *a << *(a + 1) << endl;
	int* b = a; //���� ����
	cout << *b << endl; //0

	int* c = new int[2] {*a};
	delete[] a;
	cout << *c << endl;
}