#include <iostream>
#include <string>
using namespace std;
int main(void) {
	char fullName[20];
	cin >> fullName;
	char lastName[20];
	cin >> lastName;
	cout << fullName << "|" << lastName << endl; //�Ǿ� ������ ���۰� ������.

	string stringName;
	getline(cin, stringName);
	cout << stringName << endl;
	//char* pf = fullName;
	//cout << "fullName �ּ�: " << &fullName << "pf �ּ�: " << &pf << endl;
	//int nums[10]{ 0,1,2,3 };
	//int* pn = nums;
	//cout << pn << endl;
	

}