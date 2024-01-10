#include <iostream>
//서기연도를 단기연도로 변환하는 프로그램을 작성한다.
using namespace std;
int main(void)
{
	int a;
	cout << "서기 연도를 입력하세요: ";
	cin >> a;
	cout << "서기 " << a << "년은 단기 " << a + 2333 <<"년입니다." << endl;

	return 0;
}