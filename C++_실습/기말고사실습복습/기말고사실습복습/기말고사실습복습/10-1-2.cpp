#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	cout << "도어락의 비밀번호를 입력해주세요: ";
	char pwd[100];
	cin >> pwd;
	cout << "도어락에 입력된 숫자들을 입력해주세요: ";
	char temp[100];
	cin >> temp;

	if (strcmp(pwd, temp + (strlen(temp) - strlen(pwd))) == 0)
	{
		cout << "문이 열렸습니다.";
	}
	else
	{
		cout << "비밀번호가 틀렸습니다.";
	}
}
/*
8769
98891218769
*/