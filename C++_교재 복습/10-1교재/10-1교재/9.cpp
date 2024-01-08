#include<iostream>
#include <cstring>
using namespace std;
int main(void) {
	char str1[12] = "absdd";
	const char* str4 = "djfak";
	strncat_s(str1, sizeof(str1), str4);
	cout << str1 << endl;
}