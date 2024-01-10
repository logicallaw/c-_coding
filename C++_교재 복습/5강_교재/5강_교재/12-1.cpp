#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	unsigned int daySum, dayFirst;
	do
	{
		cout << "한 달의 날짜 수를 입력하세요(28, 29, 30, 31): ";
		cin >> daySum;
	} while (daySum < 28 || daySum > 31);
	//사용자 입장에서 잘 못 입력하면 dowhile문 실행. 컴퓨터 입장에서는 올바른 값 입력하면 실행.
	do
	{
		cout << "첫 날의 요일을 입력하세요(0~6): ";
		cin >> dayFirst;
	} while (dayFirst < 0 || dayFirst>6);

	cout << "\nSun Mon Tue Wed Thr Fri Sat";
	cout << "\n--- --- --- --- --- --- ---" << endl;
	for (unsigned int dayToFirst = 0; dayToFirst < dayFirst; dayToFirst++)
	{
		cout << setw(4) << " ";
	}

	unsigned int weekCnt = dayFirst;

	for (unsigned int dayCnt = 1; dayCnt <= daySum; dayCnt++)
	{
		cout << setw(3) << right << dayCnt << " ";
		//(++weekCnt) : 먼저 증감하고 값을 리턴해 할당연산자 값이 됨.
		if ((++weekCnt) % 7 == 0)
		{
			cout << endl;
			weekCnt = 0;
		}
	}

	return 0;
}