#include <iostream>
using namespace std;
int main(void) {
	int a = 5;
	int* p1 = &a;
	delete p1;
	cout << "Pass\n";

	int* p2 = new int{ 5 };
	delete p2;
	cout << "Passs\n";
	delete p2;
}