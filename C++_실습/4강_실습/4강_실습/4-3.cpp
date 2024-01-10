#include <iostream>
using namespace std;
//unsigned int 연,월,일 입력받는다.
//unsigned int result 출력한다.
/*
논리
year로 윤년 판단--bool
month로 switch 아래 시작
month인 달은 day값으로 더한다.
swtich문으로 다 더할 수 있지만
12:2로 나누면 6임.
11:2로 나누면 5임.
2,4,6,8,10
1,3,5,7,9,11

2,4,6,8,10
1,3,5,7,9
//2월달 포함시키면 2가 추가됨. 2를 빼고 윤년인지 판단.

(year % 2 == 0)
	몫이 짝수면 result = 짝수 30x(몫-1) + 홀수 31x몫 + dayMth;
(else)
	몫이 홀수면 result = 짝수 30x(몫) + 홀수 31x(몫-1) + dayMth;

짝수든 홀수든 result += ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? 1 : 0;


(윤년 == 1)
	2월달 29일
(else)
	2월달 28일 (그댈)

5 / 2 -->2
2,4
1,3

7 / 2 --->3
2,4,6
1,3,5

11 / 2 -- 5
2,4,6,8,10
1,3,5,7,9
기본 값
1,3,5,7,9,11월 31일
4,6,8,10,12월 30일


*/
int main(void)
{
	unsigned int year, month, dayMth;
	unsigned int monthS;
	unsigned int daySum;

	cout << "몇 년인지 입력하세요: ";
	cin >> year;
	cout << "몇 월인지 입력하세요: ";
	cin >> month;
	cout << "며칠인지 입력하세요: ";
	cin >> dayMth;
	
	monthS = (month / 2);

	//month bool에 따라 다음 if문을 수행해 result를 계산한다.
	if (month % 2 == 0) daySum = ((30 * (monthS - 1)) + (31 * monthS) + dayMth);
	else daySum = ((30 * monthS) + (31 * monthS) + dayMth);

	//month가 1보다 크면 윤년의 여부에 따라 1을 더할지 생각한다.
	//이때, 위에서 2월달을 30일로 포함시켜 더해서 true면 1 + (-2), false면 +(-2)한다.
	if (month > 1) daySum += (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? -1 : -2);

	cout << "\n올해의 " << daySum << "번째 날입니다." << endl;

	return 0;
}