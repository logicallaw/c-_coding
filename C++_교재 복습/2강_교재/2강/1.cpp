#include <iostream>

using namespace std;
int main(void)
{
	string first;
	string last;
	string space = " ";
	string fullName;

	cout << "�̸�(first name) �Է��ϱ�: ";
	cin >> first;
	cout << "��(last name) �Է��ϱ�: ";
	cin >> last;

	fullName = first + space + last;
	cout << "��ü �̸�(full name): " << fullName << endl;

	string fullName2 = "wook lee";
	cout << "\n" << fullName2 << endl;

	return 0;

}