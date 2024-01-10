/*
재귀함수를 이용해 대입한 함숫값을 구한다.
다항함수f(x)
계수를 연달아 입력한다.

int main(void)
	int num;
	cin >> num;
	int size = 0;
	int temp;

	int numm = num;
	//나머지 연산으로 자릿수 구한다
	while(num != 0) //144
		temp = num % 10; //4;4;1
		num = num /10;//14;1;0
		size++; 
	cin >> x;

	int result = 0;
	for (int cnt {0}; cnt < size; cnt++)
		temp = numm % 10;
		result += (temp * func1(x, cnt));
		num = numm / 10;

입력된 정수
나머지 연산으로 cnt카운트 할 수 있다.
func1(int x, int n)//대입해서 함숫값 구한다.
	if (n == 0) return 1;
	return x * func1(n-1);
*/
#include <iostream>
using namespace std;

int func1(int x, int y);

int main(void)
{
	int num1, x;
	cout << "함수를 입력해 주세요: ";
	cin >> num1;
	cout << "x값을 입력해 주세요: ";
	cin >> x;
	
	int num2 = num1;
	int size = 0;

	int temp;

	//나머지 연산으로 size를 측정한다.
	while (num1 != 0)
	{
		temp = num1 % 10;
		num1 = num1 / 10;
		size++;
	}

	int result = 0;
	for (int cnt{ 0 }; cnt < size; cnt++)
	{
		temp = num2 % 10;
		result += (temp * func1(x, cnt));
		num2 = num2 / 10;
	}

	cout << "함숫값은 " << result << "입니다." << endl;

	return 0;
}

int func1(int x, int n)//대입해서 함숫값 구한다.
{
	if (n == 0) return 1;
	else return x * func1(x, n - 1);
}