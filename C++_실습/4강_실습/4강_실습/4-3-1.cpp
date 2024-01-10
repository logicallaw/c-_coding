#include <iostream>
using namespace std;
//unsigned int 연,월,일 입력받는다.
//unsigned int result 출력한다.
/*
논리(switch)
month에 따라 1~12까지 switch case문 위에서 아래로 더한다.
2월달 case인 경우는 윤년에 따라 값이 달라진다.
switch문이 끝나면 daySum을 얻어 마지막에 출력한다.

*/
int main(void)
{
	unsigned int year, month, dayMth;
	unsigned int daySum = 0;

	cout << "몇 년인지 입력하세요: ";
	cin >> year;
	cout << "몇 월인지 입력하세요: ";
	cin >> month;
	cout << "며칠인지 입력하세요: ";
	cin >> dayMth;

	//논리
	switch (month-1)
	{
	case 12:
		daySum += 31;
	case 11:
		daySum += 30;
	case 10:
		daySum += 31;
	case 9:
		daySum += 30;
	case 8:
		daySum += 31;
	case 7:
		daySum += 31;
	case 6:
		daySum += 30;
	case 5:
		daySum += 31;
	case 4:
		daySum += 30;
	case 3:
		daySum += 31;
	case 2:
		daySum += 28 + (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? 1 : 0);
	case 1:
		daySum += 31;
	default:
		//1월달은 기본값
		daySum += dayMth;
	}

	cout << "\n올해의 " << daySum << "번째 날입니다." << endl;

	return 0;
}