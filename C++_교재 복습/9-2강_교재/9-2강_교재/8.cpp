#include <iostream>
using namespace std;

int main(void) {
	int* p1;
	int* p2;
	{
		int* p3 = new int{ 5 };
		p1 = p3;
		int* p4 = new int{ 6 };
		p2 = p4;
		delete p4;
	}
	cout << *p1 << endl;
	cout << *p2 << endl;
}