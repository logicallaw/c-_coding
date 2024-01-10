#include <iostream>
/*
두 양의 정수 Hour, Minute를 입력받는다.
45분(고정값) 전의 시간을 계산해 출력한다.
*/
using namespace std;
int main(void)
{
	unsigned int hour, minute;
	cin >> hour >> minute;
	if (minute >= 45) minute -= 45;
	else
	{
		hour = (!hour ? 23 : hour - 1);
		minute += 15;
	}
	cout << hour << " " << minute;

	return 0;
}