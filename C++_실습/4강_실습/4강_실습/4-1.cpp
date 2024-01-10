#include <iostream>
#include <iomanip>
//점수의 최소/최대를 찾고 이들의 평균인 학생의 점수를 계산하는 프로그램이다.
//0부터 100범위의 unsigned int형인 서로다른 정수를 입력받는다.
using namespace std;
int main(void)
{
	unsigned int num1, num2, num3;
	unsigned int minN, maxN;
	unsigned int sumN;
	double avgN;
	cout << "첫 번째 점수 입력: ";
	cin >> num1;
	cout << "두 번째 점수 입력: ";
	cin >> num2;
	cout << "세 번째 점수 입력: ";
	cin >> num3;

	maxN = (num1 > num2) ? num1 : num2;
	maxN = (maxN > num3) ? maxN : num3;

	minN = (num1 < num2) ? num1 : num2;
	minN = (minN < num3) ? minN : num3;

	sumN = minN + maxN;
	avgN = sumN / 2.0;

	/*
	실수 포인트
	1.두 변수 출력시 사이의 공백을 빼먹음.
	2.반올림 고려해야됨. 반올림전 double형이면서 setprecision을 해야됨.
	*/


	cout << "\n입력한 점수 = " << num1 << " " << num2 << " " << num3 << endl;
	cout << "최소 점수와 최대 점수 = " << minN << " " << maxN << endl;
	cout << "학생의 성적 = " << fixed << setprecision(0)<<avgN << endl;

	return 0;
}