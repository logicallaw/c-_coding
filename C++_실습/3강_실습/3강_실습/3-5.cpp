#include <iostream>
//모니터 화면 비율을 double형으로 두번 입력 받고
//가로의 길이 double형을 입력받아
//세로의 길이를 double형으로 출력한다.
using namespace std;
int main(void)
{
	double scW, scH, sizeW, sizeH;
	cout << "모니터의 화면 비율을 입력해 주세요: ";
	cin >> scW>> scH;
	cout << "화면의 가로 길이를 입력해 주세요: ";
	cin >> sizeW;

	sizeH = (scH * sizeW) / scW;
	cout << "\n세로 길이: " << sizeH;

	return 0;
}