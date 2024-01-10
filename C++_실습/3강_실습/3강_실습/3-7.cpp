#include <iostream>
//16진수(hex)연산 프로그램이다.
//두 양의 정수를 16진수로 입력받아 세 연산의 결과를 출력한다.
using namespace std;
int main(void)
{
	unsigned int a, b;
	cout << "두 정수를 16진수로 입력해주세요: ";

	//기본은 10진수이므로 16진수로 입력받을 때 hex 조정자 사용해야된다.
	cin >> hex >> a >> b;
	/*이후 연산시 hex 사용안하면 10진수 계산 되므로
	16진수로 계산하려면 hex 조정자를 사용해야만 한다.
	*/
	cout << "a + b = " << hex << a + b << endl;
	//이후 연산부터는 조정자 hex 영향 받는다.
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;

	return 0;
}