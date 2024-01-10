#include <iostream>
using namespace std;
/*
unsigned int 현재요일 입력 받는다.
unsigned int 일수 입력 받는다.
(현재요일+일수)%7 --- 1,2,3,4,5,6,0
나머지 값에 따라 요일 출력함.
switch문
*/
int main(void)
{
	unsigned int dayNum, dayAdd;
	cout << "현재 요일을 입력하세요 (1: 월요일, 2: 화요일, ..., 7: 일요일): ";
	cin >> dayNum;
	cout << "일 수를 입력하세요: ";
	cin >> dayAdd;

	switch ((dayNum + dayAdd) % 7) {
	case 1:
		cout << "월요일" << endl;
		break;
	case 2:
		cout << "화요일" << endl;
		break;
	case 3:
		cout << "수요일" << endl;
		break;
	case 4:
		cout << "목요일" << endl;
		break;
	case 5:
		cout << "금요일" << endl;
		break;
	case 6:
		cout << "토요일" << endl;
		break;
	default:
		cout << "일요일" << endl;
	}

	return 0;
}