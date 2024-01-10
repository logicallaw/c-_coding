#include <iostream>
//두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
//C++
using namespace std;
int main(void)
{
	int a, b;
	//두 정수 a,b를 입력받는다.
	cin >> a >> b;
	//정수부분 제외한 소수부분 출력개수를 고정시킨다.
	cout << fixed;
	//소수점 이하 10번째자리까지 반올림하여 출력한다.
	cout.precision(10);
	cout << ((double)a / b) << endl;

	return 0;
}