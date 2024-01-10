#include <iostream>
//부동소수점을 분해하는 프로그램을 작성한다.
//double형인 부동소수점을 입력받고 정수부분과 소수부분으로 분리하여 각각 출력한다.
using namespace std;
int main(void)
{
	double num;
	int inum;
	double dnum;
	cout << "부동 소수점 입력: ";
	cin >> num;

	cout << endl;
	//정수부분
	inum = (int)num;
	//소수부분
	dnum = num - inum;
	
	//원래값, 정수부분, 소수부분 각각 출력한다.
	cout << "원래 값: " << num << endl;
	cout << "정수 부분: " << inum << endl;
	cout << "소수 아래 부분: " << dnum << endl;

	return 0;
}
/*
1.부동 소수점이란?
소수점이 고정되어 있지 않고, 지수표기법으로 나타낸 소수를 의미한다.
*/