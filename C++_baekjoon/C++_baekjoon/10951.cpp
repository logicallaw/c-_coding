#include <iostream>
/*
while(cin구문)
:
iostream 헤더에는
저장될 변수 자료형에 알맞은 값이 들어오면 cin은 true를 반환하고,
자료형과 다른 값이 들어오면 cin은 false를 반환하는 규칙이 존재한다.
*/
using namespace std;
int main(void)
{
	unsigned int a, b;
	while (cin >> a >> b)
	{
		cout << a + b << endl;
	}
	return 0;
}