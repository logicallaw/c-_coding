/*
func1(int n)
if n == 0 return 2048;
else return (3/4) * func1(n-1);
*/
#include <iostream>
#include <iomanip>
using namespace std;

double func1(int n);

int main(void)
{
	int num;
	cout << "시에르핀스키 삼각형의 단계를 입력해 주세요(0단계의 넓이는 2048입니다.) : ";
	cin >> num;
	cout << num << "단계 시에르핀스키 삼각형의 넓이는 " << func1(num) << "입니다." << endl;

	return 0;
}

double func1(int n)
{
	if (n == 0) return 2048;
	else return func1(n-1) * 3 / 4;
}