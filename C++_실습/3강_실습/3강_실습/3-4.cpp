#include <iostream>
#include <iomanip>
//세 학생의 정수를 입력받아 총점과 평균을 각각 출력하는 프로그램이다.
//점수는 0부터 100까지의 정수다.
//총점은 양의 정수이고 평균은 double형이다.
using namespace std;
int main(void)
{
	unsigned int a, b, c, total;
	double avg;

	cout << "첫 번째 학생 점수: ";
	cin >> a;
	cout << "두 번째 학생 점수: ";
	cin >> b;
	cout << "세 번째 학생 점수: ";
	cin >> c;

	total = a + b + c;
	//unsigned int / int -->unsigned int / unsigned int 이므로 소수점 이하 출력 안됨
	//따라서, unsinged int / double으로 해야지 소수점 이하까지 계산한다.
	//그러나 나누어 떨어지는 경우 소수점 이하가 없으므로 출력을 원한다면
	//cout에서 fixed,setprecision(2) 조정자를 사용해야한다.
	avg = total / 3.0;
	cout << "\n총점: " << total << endl;
	cout << "평균: " << fixed << setprecision(2) <<avg << endl;

	return 0;

}