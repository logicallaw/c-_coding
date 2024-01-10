#include <iostream>
#include <iomanip>
using namespace std;
/*
int형 정수 하나를 입력받음
4번의 입력은 각각 cin이 아니라 while문으로 실행
마지막에 평균을 계산해 double형으로 소수점 이하 2번째자리까지 출력함.
또한, count변수 선언
*/
int main(void)
{
	int numInt;
	int numSum = 0;
	double numAvg;
	int cnt = 0;

	while (cnt < 4)
	{
		cout << "점수를 하나 입력하세요(0~100의 범위): ";
		cin >> numInt;
		numSum += numInt;
		cnt += 1; //cnt++ or ++cnt
	}
	numAvg = static_cast<double>(numSum) / 4.0;
	cout <<fixed << setprecision(2) << "평균 점수: " << numAvg << endl;
	return 0;
}