#include <iostream>
using namespace std;
/*
unsigned int형인 hour, min을 입력받는다.
unsigned int형인 minAll을 입력받는다.
오븐이 끝나는 시간 hour, min을 출력한다.
*/
int main(void)
{
	int hour, min, minAll;
	cin >> hour >> min;
	cin >> minAll;

	hour += minAll / 60;
	minAll -= ((minAll / 60) * 60);
	min += minAll;
	if (min >= 60)
	{
		hour += min / 60;
		min -= (min / 60) * 60;
	}
	hour = (hour > 23) ? (hour-24) : hour;
	cout << hour << " " << min;

	return 0;
}