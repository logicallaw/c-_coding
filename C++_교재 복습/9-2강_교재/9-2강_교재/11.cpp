#include <iostream>
using namespace std;
int main(void) {
	int* a = new int{ 5 };
	cout << *a << endl; //5
	cout << a << endl; //동적할당객체 주소
	cout << &a << endl;
	delete a;
	cout << a << endl;
	a = new int{ 10 };
	cout << *a << endl;
	cout << a << endl;

}