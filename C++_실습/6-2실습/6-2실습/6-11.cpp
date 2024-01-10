/*
2진수를 10진수로 변환한다
재귀를 사용하여 변환을 수행한다

1101

2(2(2X(2X0+1)+1))+1

101000
000101
101
num = 1101
numm = 1011
numm % 10
자리수 바꿈
while (num != 0)
temp *= 10;
temp = num % 10;
num = num / 10;

1101
func(numm)
if (numm == 1) return 1;
else return 2*func(numm % 10) + 1

*/
#include <iostream>
using namespace std;
int func(int number);
int main(void)
{
	int num;
	int temp = 0;
	cout << "이진수를 입력하세요: ";
	cin >> num;
	cout << num << "의 십진수 표현: " << func(num) << endl;

	return 0;
}
int func(int number)
{
	if (number == 0) return 0;
	else return 2 * func(number / 10) + (number % 10);
}
