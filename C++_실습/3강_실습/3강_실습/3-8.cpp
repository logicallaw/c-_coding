#include <iostream>
//남은 쿠기의 수를 출력하는 프로그램이다.
//쿠키의 수와 친구의 수는 사용자에게 입력받는다.
//자료형은 3-6과 동일하고 단 출력시 나머지 쿠키를 출력한다.
using namespace std;
int main(void)
{
	unsigned int snak, friends;
	cout << "쿠키의 개수를 입력해주세요: ";
	cin >> snak;
	cout << "친구의 수를 입력해주세요: ";
	cin >> friends;

	cout << "남은 쿠키의 개수: " << snak % friends << endl;

	return 0;
}