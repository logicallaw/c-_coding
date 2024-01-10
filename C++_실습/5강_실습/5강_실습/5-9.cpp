/*
1년이 지날때마다 기존 X값의 1.2배임
그리고 20/100은 0.02가 아니라 0.2임.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int n;
	double inp;
	cout << "N값과 1년간 물가상승률(%)을 입력해 주세요: ";
	cin >> n >> inp;

	double exp, result = 1;
	exp = 1 + inp / 100;
	for (int i = 0; i < n; i++)
	{
		result *= exp;
	}
	cout << fixed << setprecision(3);
	cout << n << "년뒤 물가: 현재 물가의 " << result << "배" << endl;

	return 0;
}