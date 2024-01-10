#include <iostream>
//알파벳 소문자를 대문자로 출력한다.
using namespace std;
int main(void)
{
	char a;
	char b;
	cout << "소문자 알파벳을 입력하세요: ";
	cin >> a;
	//소문자에서 대문자갈 때 32만큼 빼주면 된다.
	b = a - 32;
	cout << "대문자로 변환된 결과: " << b << endl;

	return 0;
}