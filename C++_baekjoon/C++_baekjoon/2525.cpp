#include <iostream>
using namespace std;
/*
unsigned int���� hour, min�� �Է¹޴´�.
unsigned int���� minAll�� �Է¹޴´�.
������ ������ �ð� hour, min�� ����Ѵ�.
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