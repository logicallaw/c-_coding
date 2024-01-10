#include <iostream>
using namespace std;
int main(void)
{
	int n;
	do
	{
		cout << "자연수 N을 입력해 주세요: ";
		cin >> n;
	} while (n < 1);

	int m;
	cout << endl << n << "의 배수인지 확인할 숫자를 입력해 주세요: ";
	while (cin >> m) //입력된 값을 반환한다.
	{
		if (m > 0)
		{
			if (m % n == 0)
			{
				cout << m << "은(는) " << n << "의 배수입니다." << endl << endl;
			}
			else
			{
				cout << m << "은(는) " << n << "의 배수가 아닙니다." << endl << endl;
			}
		}
		cout << n << "의 배수인지 확인할 숫자를 입력해 주세요: ";
	}
	cout << "while문 끝: " << m << endl;
	return 0;
}