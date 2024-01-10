#include <iostream>
using namespace std;
int main(void)
{
	int a{ 10 };

	cout << a << endl; //위 코드에서 컴파일 에러가 나서 프로그램이 실행되지 않는다.
	int a{ 0.5 };       // 중괄호 초기화
	int ary1[] = { 1, 2, 3 };

	return 0;
}