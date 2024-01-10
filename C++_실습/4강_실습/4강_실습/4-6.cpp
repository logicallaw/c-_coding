#include <iostream>
using namespace std;
//세 double형 계수를 입력받는다.
//실근의 개수를 판별식을 사용하여 구하고 출력한다.
int main(void)
{
	double a, b, c;
	unsigned int result;

	cout << "이차방정식의 계수를 입력해주세요: ";
	cin >> a >> b >> c;

	result =(b*b-4*a*c)>0 ? 2 : ((b * b - 4 * a * c) == 0 ? 1 : 0);
	cout << "실근의 개수: " << result << "개" << endl;

	return 0;
}