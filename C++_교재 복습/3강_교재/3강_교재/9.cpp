#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	double pi = 3.1415922653;
	double test = 1234.1234;
	double x = 1237234.1235;
	double y = 1234.323232;
	int num = -14;
	bool z = 1;

	/*
	조정자 사용시 주의사항
	:조정자를 한번 사용하기 시작하면
	그 이후 모든 코드에 조정자가 적용되어 출력된다.
	따라서, 조정자를 사용하기 원치 않으면 조정자 초기화해야한다.
	다음은 조정자를 초기화하는 코드이다.
	std::resetiosflags(std::ios_base::adjustfield)
	*/
	/*
	참고 블로그:
	https://velog.io/@mohadang/C-Manipulator%EC%A1%B0%EC%A0%95%EC%9E%90
	*/

	//scientific:지수표기법으로 출력
	//소수점아래 6자리까지 기본적으로 출력
	cout << scientific << pi << endl; //3.141592e+00

	//기본 출력은 유효숫자 6개까지.
	//뒤에 소수점 출력해야한다면 지수표기법 변환후 유효숫자 6개 출력함.
	cout << "x:" << x << endl; //1.23723e+06
	cout << "y:" << y << endl; //1234.32
	cout << "pi:" << pi << endl; //1234.12
	cout << "test:" << test << endl; //1234.12

	//setw()조정자는 출력 칸수를 지정한다.
	//기본 pi 크기는 7칸. 나머지는 setw()사용시 앞에 공백으로 채운다.
	//setfill()사용시 공백 대신 안의 문자상수로 칸을 채운다.
	cout << "setw(10):" << setw(10) << pi << endl; //   3.14159
	cout << "setfill('*') and setw(10):" << setfill('*') << setw(8) << pi << endl; //*3.14159

	//showbase는 진법을 정확히 표현한다.
	//기본값은 noshowbase이다.
	cout << "showbase oct num:" << showbase << oct << num << endl;
	cout << "noshowbase oct num:" << noshowbase << oct << num << endl;
	cout << "oct num:" << oct << num << endl;

	//left:왼쪽 정렬, internal:부호와 숫자사이에 공백이 추가되어 정렬, right:오른쪽 정렬
	cout << setw(10) << left << num << endl;
	cout << setw(10) << internal << num << endl;
	cout << setw(10) << right << num << endl;

	//boolalpha
	cout << boolalpha << z << endl; //true

	//fixed하면 지수표기법 변환 안하고 소수점이하 6자리까지 모두 표현함.
	cout << "fixed and x:" << fixed << x << endl; //1237234.123500
	cout << "fixed and y:" << fixed << y << endl; //1234.323232
	cout << "fixed and pi:" << fixed << pi << endl; //3.141592

	return 0;
}