#include <iostream>
using namespace std;
int main(void) {
	int* a = new int{ 5 };
	cout << *a << endl; //5
	cout << a << endl; //悼利且寸按眉 林家
	cout << &a << endl;
	delete a;
	cout << a << endl;
	a = new int{ 10 };
	cout << *a << endl;
	cout << a << endl;

}