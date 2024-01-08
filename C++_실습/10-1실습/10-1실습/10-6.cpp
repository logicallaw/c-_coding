#include <iostream>
#include <cstring>
using namespace std;
void swap(char* p1, char* p2);
int main(void) {
	cout << "문자열을 입력하세요: ";
	char str[100];
	cin.getline(str, 100);

	int size = strlen(str);
	//cout << size;
	//char* cpy = new char[strlen(str)];
	for (int i{ 0 }; i < size / 2; i++)
		swap(str[i], str[size - 1 - i]);

	cout << "뒤집힌 문자열: " << str;


}
void swap(char* p1, char* p2) {
	char temp = *p1; //str[i] = char str[i]
	*p1 = *p2;
	*p2 = temp;
	//cout << p1 << " " << p2 << endl;
}