#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	cout << "������� ��й�ȣ�� �Է����ּ���: ";
	char pwd[100];
	cin >> pwd;
	cout << "������� �Էµ� ���ڵ��� �Է����ּ���: ";
	char temp[100];
	cin >> temp;

	if (strcmp(pwd, temp + (strlen(temp) - strlen(pwd))) == 0)
	{
		cout << "���� ���Ƚ��ϴ�.";
	}
	else
	{
		cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�.";
	}
}
/*
8769
98891218769
*/