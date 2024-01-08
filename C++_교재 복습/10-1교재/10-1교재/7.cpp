#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	char source[10] = "dlwlrma"; //7
	char destination[10];
	strcpy_s(destination, 10, source);
	cout << destination << endl;

	char destination1[5]; //5
	strcpy_s(destination1, 5, source); 
	cout << destination1 << endl;
}