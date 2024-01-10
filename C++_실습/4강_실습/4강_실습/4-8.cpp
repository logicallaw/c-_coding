#include <iostream>
using namespace std;
/*
int형 연봉 입력받는다.
연봉에서 모든 세금 제외한 실수령 월급int를 출력한다.

주의사항
1.출력은 연봉이 아니라 월급이다.
2.10.7%는 소수로 나타내면 10.7이 아니라 두칸 옮긴 0.107임을 주의해야함.
3.연봉에서 세금뺄때 3배의 연봉이 아니라 그냥 연봉에서 빼는거임.
*/
int main(void)
{
	int earnings;
	double incomes;

	cout << "연봉을 입력하세요: ";
	cin >> earnings;
	incomes = (earnings - earnings*0.107) / 12.0;
	cout << "실수령 월급: " << static_cast<int>(incomes) << endl;

	return 0;

}