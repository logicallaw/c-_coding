/*
unsigned int형인 한달총일수(daySum)와 unsigned int 첫날의 요일(dayFirst)을 입력받는다.
do~while문을 사용하여 달력을 완성해 출력한다.
논리
한줄에 7개씩만 가능
왼쪽부터 0~6까지의 요일
첫날의 요일
:3이면 0' ',1,2,3채우고(순서대로 출력) 순서대로 7개 완성되면 다음줄, 7개 완성되면 다음줄해서
:4 ' ',1,2,3
첫날의 요일이 시작점
그 전까지 X
unsigned int weekCnt = dayFirst;
weekCnt % 7 == 0
	cout << endl;
(else)
	X

dayFirst 만큼 -->공백 채운다.-->1부터 차례대로 출력(unsigned int dayCnt = 1; dayCnt <= daySum; dayCnt++)

for (unsigned int dayToFirst = 0; dayToFirst<dayFirst; dayToFirst++)
{
	cout << setw(4) << " ";
}

dayCnt
weekCnt % 7 == 0이 되면 다음줄(endl)
마지막일까지 채운다.


setw(4)-iomanip
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	unsigned int daySum, dayFirst;
	cout << "한 달의 날짜 수를 입력하세요(28, 29, 30, 31): ";
	cin >> daySum;
	cout << "첫 날의 요일을 입력하세요(0~6): ";
	cin >> dayFirst;

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
		weekCnt += 1;
		if (weekCnt % 7 == 0)
		{
			cout << endl;
			weekCnt = 0;
		}
	}

	return 0;
}