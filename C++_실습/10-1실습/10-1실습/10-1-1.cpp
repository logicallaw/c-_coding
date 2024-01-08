//C++-style
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Tmp { //Tmp Ŭ���� ���� ����:string->char[] �� ��ȯ�� ���� ������.
private:
	char* str;
public:
	Tmp(string s)
		: str{ new char[s.length() + 1] } {
		for (int i{ 0 }; i < s.length(); i++) {
			str[i] = s[i];
		}
		str[s.length() + 1] = '\0';
	}
	~Tmp() { delete[] str; }
	char* getStr() { return str; }
};
int main(void) {
	string str1, str2, str3;
	cout << "���Ӹ��� �Է��� �ּ���: ";
	getline(cin, str1);
	cout << "���߻縦 �Է��� �ּ���: ";
	getline(cin, str2);
	cout << "��ó⵵�� �Է��� �ּ���: ";
	getline(cin, str3);

	Tmp t1{ str1 };
	Tmp t2{ str2 };
	Tmp t3{ str3 };

	char* p1 = t1.getStr();
	char* p2 = t2.getStr();
	char* p3 = t3.getStr();

	strcat(p1, "(");
	strcat(p1, p3);
	strcat(p1, ") - ");
	strcat(p1, p2);

	cout << p1 << endl;
	return 0;
}