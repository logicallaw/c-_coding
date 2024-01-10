#include <iostream>
//두 문자상수인 영문자를 각각 입력받아 두 문자 사이의 문자의 개수를 파악해 출력한다.
using namespace std;
int main(void)
{
	char a, b; //사전순으로 입력됨
	unsigned int num;
	cout << "두 영문자를 입력해주세요: ";
	cin >> a >> b;
	num = (b - a - 1);
	cout << "두 문자사이에는 " << num << "개의 문자가 존재합니다." << endl;

	return 0;
}