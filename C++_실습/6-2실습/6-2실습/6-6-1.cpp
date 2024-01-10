#include <iostream>
using namespace std;

int fx(int func, int x, int mulx = 1);

int main(void)
{
	cout << "함수를 입력해주세요: ";
	long long f;
	cin >> f;
	cout << "x값을 입력해 주세요: ";
	int x;
	cin >> x;
	cout << "함숫값은 " << fx(f, x) << "입니다." << endl;

	return 0;
}

int fx(int func, int x, int mulx)
{
	if (func == 0) return 0;
	else return (func % 10) * mulx + fx(func / 10, x, mulx * x);
}