#include <iostream>
#include <iomanip>
using namespace std;
/*
int 연산기호를 입력받는다.
int 두 양의 정수를 입력받는다.

예외처리
나누는 수가 0이면 예외처리한다.
연산기호 번호 잘못 입력되면 예외처리한다.

논리
switch문 사용
default 연산기호 예외처리
if문 통해 나누는수 0인지 체크
결과를 int형 result에 저장함.

주의사항
1.기본적으로 소수 나눗셈 표기는 과학적 표기법(지수표기법)따르는데
fixed사용하면 지수 표기가 아닌 고정 소수점표기로 출력된다.
2.setprecision사용하기 위해서는 반드시 iomanip를 include해야한다.
3.정수 나누기 정수에서 몫을 소수로 나타내고 싶다면 나누어지는 수에 double형으로
casting해야한다.
*/
int main(void)
{
	int num1, num2, result;
	int operN;

	cout << "연산을 선택하세요 (1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈): ";
	cin >> operN;

	if (0 < operN && operN <5) 
	{
		cout << "두 개의 숫자를 입력하세요: ";
		cin >> num1 >> num2;
		if (num2 == 0) cout << "0으로 나눌 수 없습니다.";
		else
		{
			switch (operN) {
			case 1:
				cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			case 2:
				cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			case 3:
				cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			case 4:
				cout << num1 << " / " << num2 << " = " << setprecision(4) <<static_cast<double>(num1) / num2 << endl;
			}
		}
	}
	else cout << "잘못된 선택입니다." << endl;
	return 0;
}
