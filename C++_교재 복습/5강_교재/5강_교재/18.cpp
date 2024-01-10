/*
정수int num 입력 받는다.
정수 입력이 배수X 딱 값이 5 또는 16이면 whille문 종료한다.
!(num == 5 || num == 16)
(
*/
#include <iostream>
using namespace std;
int main(void)
{
	int num = 0;
	while (!(num == 5 || num == 16))
	{
		cout << "숫자를 입력하세요: ";
		cin >> num;
	}
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}