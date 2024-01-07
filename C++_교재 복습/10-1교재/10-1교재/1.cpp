#include <iostream>
#include <string>
using namespace std;
int main(void) {
	char firstName[10];
	char lastName[10];
	cout << "input Name: ";
	cin >> firstName >> lastName;
	cout << firstName << " " << lastName << endl;

	cin.ignore(); //cin 입력후 엔터가 남아 있어서 getline이 무시된다.
	//ignore는 엔터를 지워주는 역할을 한다. 다른 문자나 공백은 지우지 못한다.

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