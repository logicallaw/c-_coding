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
	cout << "문자열을 입력하세요: ";
	cin.getline(str, 100);
	reverseStr(str);
	cout << "뒤집힌 문자열: " << str;

	delete[] str;
}