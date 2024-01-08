#include <iostream>
#include <cstring>
using namespace std;
class Tmp {
private:
	char* str;
public:
	Tmp(const char* s)
		: str{ new char[strlen(s) + 1] } {
		for (int i{ 0 }; i < strlen(s); i++)
			str[i] = s[i];
		str[strlen(s)] = '\0';
	}
	const char* getString() const {
		return str;
	}
	~Tmp() {
		delete[] str;
	}
};

int main(void) {
	char str1[] = "junho";
	char* name = str1;
	const char* p = "hi";
	Tmp t{ p };
	cout << t.getString() << endl;

}