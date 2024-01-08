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
	cout << "문자열을 입력하세요: ";
	cin.getline(str, sizeof(str));

	reverseString(str);

	cout << "뒤집힌 문자열: " << str << endl;
		
}