#include <iostream>
#include <ctime>

using namespace std;
int main(void)
{
	long elapsedSeconds = time(0);
	int currentSecond = elapsedSeconds % 60;

	long elapsedMinutes = elapsedSeconds / 60;
	int currentMinutes = elapsedMinutes % 60;

	long elapsedHours = elapsedMinutes / 60;
	int currentHour = elapsedHours % 60;

	cout << currentHour << ":" << currentMinutes << ":" << currentSecond << endl;
	cout << time(0) << endl;
}