#include <iostream>
#include <cstring>
using namespace std;
void reverseStr(char* p) {
	for (int i{ 0 }; i < strlen(p) / 2; i++) {
		char temp = p[i];
		p[i] = p[strlen(p) - 1 - i];
		p[strlen(p) - 1 - i] = temp;
	}
}
int main(void) {
	char* str = new char[100];
	cout << "���ڿ��� �Է��ϼ���: ";
	cin.getline(str, 100);
	reverseStr(str);
	cout << "������ ���ڿ�: " << str;

	delete[] str;
}