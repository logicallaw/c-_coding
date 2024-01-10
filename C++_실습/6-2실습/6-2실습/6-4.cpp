/*
거듭제곱 계산 프로그램
정수인 밑과 지수를 입력받는다.
밑은 정수, 지수는 음이아닌 정수
재귀함수로 작성,반복문 사용 안한다.

int n, m;
func1(n, m)
	if m == 0 return 1;
	else return n * func1(n, m-1);
*/
#include <iostream>
using namespace std;
int func1(int x, int y);
int main(void)
{
	int n, m;
	cout << "밑과 지수를 입력해 주세요: ";
	cin >> n >> m;
	int result = func1(n, m);

	cout << n << "의 " << m << "제곱은 " << result << "입니다." << endl;

	return 0;
}

int func1(int x, int y)
{
	if (y == 0) return 1;
	else return x * func1(x, y - 1);
}