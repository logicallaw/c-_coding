#include <iostream>
using namespace std;
int main(void) {
	int a{ 5 };
	int b{ 16 };
	const int& ref1 = a;
	
	const int c = 10;
	const int& ref2 = c;
	const int& ref3 = 7;
	int&& r = 10;
	int&& d = a;
	int&& e = c;


}