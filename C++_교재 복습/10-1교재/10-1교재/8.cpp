#include <iostream>
//#include <cstring>
using namespace std;
int main(void) {
	char str1[20] = "This is ";
	const char* str2 = "a string";
	strcat(str1, str2);
	cout << str1 << endl;

	//const char* str1 = "Hello Alice";
	//const char* str2 = "Hello John";
	//const char* str3 = "Hello Betsy";

	//char str4[10] = "dlwlrma";
	//char str5[10];

	//cin.getline(str5, 10);
	////strncpy_s(str5, str4, 7);

	//cout << str5 << endl;
	////cout << strcmp(str1, str2) << endl;
	////cout << strcmp(str2, str3) << endl;



}