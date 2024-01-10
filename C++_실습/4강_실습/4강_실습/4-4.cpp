#include <iostream>
using namespace std;
/*
num>120 과속
num<50 저속
else 정속
*/
int main(void)
{
	double num;
	cout << "자동차의 속력을 입력해주세요: ";
	cin >> num;

	if (num > 120)
	{
		cout << "과속 주행입니다.";
	}
	else if (num > 50)
	{
		cout << "정속 주행입니다.";
	}
	else
	{
		cout << "저속 주행입니다.";
	}
	return 0;
}