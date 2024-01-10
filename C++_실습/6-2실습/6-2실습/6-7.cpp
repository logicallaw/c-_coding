#include <iostream>
using namespace std;

int func1(int x, int y);

int main(void)
{
	int x, y;
	do
	{
		cout << "출력할 숫자의 위치를 입력해주세요(N번째 줄 M번째 숫자): ";
		cin >> x >> y;
	} while (!((x>=y)&&(x<=25)&&(y>=1)));
	int result;
	result = func1(x - 1, y-1);

	cout << x << "번째 줄의 " << y << "번째 숫자는 " << result << "입니다." << endl;
}

int func1(int n, int m)
{
	if (m == 0) return 1;
	else if (n == m) return 1;
	else return func1(n - 1, m - 1) + func1(n - 1, m);
}