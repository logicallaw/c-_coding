#include <iostream>
#include <string>
using namespace std;
int main(void) {
	char firstName[10];
	char lastName[10];
	cout << "input Name: ";
	cin >> firstName >> lastName;
	cout << firstName << " " << lastName << endl;

	cin.ignore(); //cin �Է��� ���Ͱ� ���� �־ getline�� ���õȴ�.
	//ignore�� ���͸� �����ִ� ������ �Ѵ�. �ٸ� ���ڳ� ������ ������ ���Ѵ�.

	char fullName[20];
	cout << "input name: ";
	cin.getline(fullName, 20, ' ');
	//cin.getline(fullName, 20); default
	cout << fullName << endl;

	string stringName;
	cout << "input name: ";
	getline(cin, stringName, '\n');
	//getline(cin, stringName); default
	cout << stringName << endl;

	return 0;

}