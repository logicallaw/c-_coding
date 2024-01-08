#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;
//문자열을 대입하는 strcpy함수
int main(void)
{
	char source[10] = "wook lee";
	char destination[10];
	strncpy(destination, source, 8);
	destination[8] = '\0';
	cout << destination << endl;

	return 0;
}