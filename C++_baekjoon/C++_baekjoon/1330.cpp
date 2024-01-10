#include <iostream>
//두 int형 정수를 입력받는다.
//두 정수를 비교해서 A와 B의 대소관계를 출력한다.
using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	cout << ((a > b) ? ">" : ((a < b) ? "<" : "=="));
	return 0;

}