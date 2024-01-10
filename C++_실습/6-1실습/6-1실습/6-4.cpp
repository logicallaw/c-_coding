#include <iostream>
#include <ctime>
using namespace std;
int main(void)
{
	long etime = time(0);
	etime /= 86400;
	etime %= 7;
	cout << time(0) << endl;
	switch (etime)
	{
	//유닉스 시간의 기준:1970년 1월 1일 목요일
	//따라서, time(0)에 나온 값은 유닉스 시간을 기준으로 경과한 시간이다.
	//하루는 86400초이므로 나누면 일수가 나오고
	//7로 나누면 요일을 구할 수 있다.
	case 0:
		cout << "오늘은 목요일입니다."; break;
	case 1:
		cout << "오늘은 금요일입니다."; break;
	case 2:
		cout << "오늘은 토요일입니다."; break;
	case 3:
		cout << "오늘은 일요일입니다."; break;
	case 4:
		cout << "오늘은 월요일입니다."; break;
	case 5:
		cout << "오늘은 화요일입니다."; break;
	case 6:
		cout << "오늘은 수요일입니다."; break;
	}
	cout << endl;

}