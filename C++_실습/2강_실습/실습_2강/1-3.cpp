#include <iostream>
//양수와 음수 입력 받고 덧셈을 수행하는 프로그램이다.
using namespace std;
int main(void)
{
	unsigned int a;
	int b;

	cout << "양수를 입력하세요: ";
	cin >> a;
	cout << "음수를 입력하세요: ";
	cin >> b;
	cout << a << " + " << b << " = " << a + b << endl;

	return 0;
}