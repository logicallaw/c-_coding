#include <iostream>
using namespace std;
/*
다음 세가지 입력된다.
unsigned int 나이
bool 경험,학위

지원 승인(세가지 모두)->면접일정 바로
지원 거절(하나라도 부족하면 거절메시지)->
	학위X -->지원 거절
	(else)
		//학위O
		18세 이상&&경험O --> 적절한 메시지

18세이상/경험=boolAnd
boolAnd
	학위
		대상자


학위

*/
int main(void)
{
	unsigned int age;
	bool background, bachelor;

	cout << "나이를 입력하세요: ";
	cin >> age;
	cout << "이미 경험이 있습니까? (1: 예, 0: 아니요): ";
	cin >> background;
	cout << "학위를 소지하고 있습니까? (1: 예, 0: 아니요): ";
	cin >> bachelor;

	if (bachelor)
	{
		if ((age >= 18) && (background))
		{
			cout << "지원이 승인되었습니다. 면접 일정을 안내드리겠습니다." << endl;
		}
		else if (!(age >= 18) && (background))
		{
			cout << "지원이 거절되었습니다. 나이가 18세 이상이고 경험이 있어야 합니다.";
		}

	}
	else if (!bachelor)
	{
		cout << "지원이 거절되었습니다. 학위가 필요합니다." << endl;
	}

	return 0;
}