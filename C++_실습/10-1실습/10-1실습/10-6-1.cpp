#include <iostream>
#include <cstring>
using namespace std;
void reverseString(char* str) {
	int length = strlen(str);
	int i = 0;
	int j = length - 1;
	while (i < j) {
		swap(str[i], str[j]);
		i++;
		j--;
	}
}

int main(void) {
	char str[100];
	cout << "���ڿ��� �Է��ϼ���: ";
	cin.getline(str, sizeof(str));

	reverseString(str);

	cout << "������ ���ڿ�: " << str << endl;
		
}