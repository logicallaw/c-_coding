#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int a = 10;
	int b ;
	cout << showpos << showbase << a << endl;

	//16진수로 변수b를 입력받는다.
	cin >> hex >> b;
	/*기본 정수 출력은 10진수이므로
	* 16진수로 출력을 원한다면 hex 조정자 사용해야한다.
	*/
	//이후 정수 출력은 hex 조정자의 영향을 받으므로 제거하고 싶다면
	//std::resetiosflags(std::ios_base::adjustfield)를 사용해야한다.
	cout << hex << b << endl;
	cout << b << endl;
	cout << resetiosflags(ios_base::basefield | ios_base::showpos) << b << endl; //조정자 초기화하여 10진수를 출력한다.

	return 0;
}