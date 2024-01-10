/*
0이 아닌 세 정수를 입력받는다.
두 근을 출력하는 프로그램이다.
main()함수에서 두 근을 출력한다. - reference사용
void calculateRoot() 근을 계산하는 함수이다.
(매개변수는 정해져있지 않다.)
(두 근의 계산은 calculateRoot함수에서 진행되고

main()
	int a, b, c;
	double x1, x2;
	bool p = 0

	if (p) //근이 존재
		cout << x1, x2
	else 
		cout << 실근이 없다.
		cout << x1, x2
		

void calculateRoot(int a, int b, int c, double& x1, double& x2, bool& p)
//판별식을 진행해 근이 존재하면 계산 진행
//근이 존재하지 않으면 계산 진행 안함.
//리턴값이 없어서 참조해서 근을 저장해야됨. - x1, x2;	
	double temp;
	temp = pow(b,2) - (4 * a * c);
	x1 = (-b + sqrt(temp)) / (2 * a);
	x2 = (-b - sqrt(temp)) / (2 * a);
	if (temp >= 0) p = 1;
*/
#include <iostream>
#include <cmath>
using namespace std;

void calculateRoot(int a, int b, int c, long double& x1, long double& x2, bool& p);

int main(void)
{
	int a, b, c;
	long double x1, x2;
	bool p = 0;

	cout << "계수 a, b, c를 입력하세요: ";
	cin >> a >> b >> c;
	calculateRoot(a, b, c, x1, x2, p);

	if (!p) cout << "실근이 없습니다!" << endl;
	cout << "이차방정식의 두 근: " << x1 << ", " << x2 << endl;

	return 0;
}

void calculateRoot(int a, int b, int c, long double& x1, long double& x2, bool& p)
{
	long double temp;
	temp = pow(b, 2) - (4 * a * c);
	x1 = (-b + sqrt(temp)) / (2 * a);
	x2 = (-b - sqrt(temp)) / (2 * a);
	if (temp >= 0) p = 1;
}