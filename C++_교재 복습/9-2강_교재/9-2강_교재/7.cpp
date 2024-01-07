#include <iostream>
using namespace std;
int main(void) {
	int* p1 = new int;
	int* p2 = new int{ 5 };

	int* p3 = new int[5];
	int size;
	cin >> size;
	int* p4 = new int[size];

	delete[] p4;
	delete[] p3;
	delete p2;
	delete p1;

}