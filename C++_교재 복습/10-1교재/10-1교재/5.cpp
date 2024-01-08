#include <iostream>
#include <string>
using namespace std;
int main(void) {
	char fullName[20];
	cin >> fullName;
	char lastName[20];
	cin >> lastName;
	cout << fullName << "|" << lastName << endl; //맨앞 공백은 버퍼가 무시함.

	string stringName;
	getline(cin, stringName);
	cout << stringName << endl;
	//char* pf = fullName;
	//cout << "fullName 주소: " << &fullName << "pf 주소: " << &pf << endl;
	//int nums[10]{ 0,1,2,3 };
	//int* pn = nums;
	//cout << pn << endl;
	

}