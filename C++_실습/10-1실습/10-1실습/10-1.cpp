//C-style
#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	char str1[50];
	char str2[20];
	char str3[5];
	cout << "���Ӹ��� �Է��� �ּ���: ";
	cin.getline(str1, 20, '\n');
	cout << "���߻縦 �Է��� �ּ���: ";
	cin.getline(str2, 20, '\n');
	cout << "��ó⵵�� �Է��� �ּ���: ";
	cin.getline(str3, 5, '\n');
	
	strcat_s(str1,sizeof(str1), "(");
	strcat_s(str1,sizeof(str1), str3);
	strcat_s(str1,sizeof(str1), ") - ");
	strcat_s(str1,sizeof(str1), str2);
	cout << str1;
	return 0;
	
}