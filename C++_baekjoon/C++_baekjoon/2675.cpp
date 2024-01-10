#include <iostream>
using namespace std;
int main(void)
{
	string str = "Happy New Year";
	char s[15] = "Happy New Year";
	//cout << str.length() << endl;
	for (int i{ 0 }; i < str.length(); i++)
		cout << str[i] << endl;
	cout << sizeof(str) << endl;
	cout << sizeof(s) << endl;

	return 0;
}