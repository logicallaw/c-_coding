#include <iostream>
/*
�� ���� ���� Hour, Minute�� �Է¹޴´�.
45��(������) ���� �ð��� ����� ����Ѵ�.
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