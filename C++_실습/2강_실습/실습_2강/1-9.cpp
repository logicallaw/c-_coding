#include <iostream>
//자기 소개를 출력하는 프로그램이다.
using namespace std;
int main(void)
{
	char name[50];
	unsigned int a, b;

	cout << "학번을 입력하세요: ";
	cin >> a;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "나이를 입력하세요: ";
	cin >> b;

	cout << endl;
	cout << "안녕하세요, 저는 " << name << "입니다." << endl;
	cout << "제 학번은 " << a << "이고, 나이는 " << b << "세입니다." << endl;

	return 0;
}