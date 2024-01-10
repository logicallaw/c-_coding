#include <iostream>

using namespace std;
int main(void)
{
	string first;
	string last;
	string space = " ";
	string fullName;

	cout << "이름(first name) 입력하기: ";
	cin >> first;
	cout << "성(last name) 입력하기: ";
	cin >> last;

	fullName = first + space + last;
	cout << "전체 이름(full name): " << fullName << endl;

	string fullName2 = "wook lee";
	cout << "\n" << fullName2 << endl;

	return 0;

}