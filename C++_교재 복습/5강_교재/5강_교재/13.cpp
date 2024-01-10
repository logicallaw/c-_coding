#include <iostream>
/*
int num;
unsigned int result;
음이 아닌 정수의 입력을 받는다.
잘못입력받으면 다시 입력받게 한다.(do~while)
입력된 정수를 받아 가장 왼쪽의 숫자만 출력하게 한다.
논리
1.10으로 나누어서 일의자리수 될때까지 구한다.
2.

do
{
	num /= 10;
	a = num % 10;
} while ( a > 9 );
cout << "가장 왼쪽의 숫자 = " << num << endl;
return 0;
516 / 10 =
50
5 / 10 = 0~9

11 / 10 = 1

(num % 10) > 9

*/
using namespace std;
int main(void)
{
	int num;
	do
	{
		cout << "음수가 아닌 정수를 입력하세요: ";
		cin >> num;
	} while (num < 0);

	do
	{
		num /= 10;
	} while (num > 9);
	cout << "가장 왼쪽의 숫자 = " << num << endl;
	return 0;
}