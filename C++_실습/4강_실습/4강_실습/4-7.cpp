#include<iostream>
using namespace std;
/*
unsigned int형 5이하의 양의 정수 입력
switch문 사용
카운트다운 출력
*/

int main(void)
{
	unsigned int num;
	cout << "숫자를 입력해주세요: ";
	cin >> num;

	cout << "\n카운트다운" << endl;
	switch (num) {
	case 5:
		cout << "다섯" << endl;
	case 4:
		cout << "넷" << endl;
	case 3:
		cout << "셋" << endl;
	case 2:
		cout << "둘" << endl;
	default :
		cout << "하나" << endl;
	}
	return 0;
}