#include <iostream>
using namespace std;
//unsigned int ��,��,�� �Է¹޴´�.
//unsigned int result ����Ѵ�.
/*
��(switch)
month�� ���� 1~12���� switch case�� ������ �Ʒ��� ���Ѵ�.
2���� case�� ���� ���⿡ ���� ���� �޶�����.
switch���� ������ daySum�� ��� �������� ����Ѵ�.

*/
int main(void)
{
	unsigned int year, month, dayMth;
	unsigned int daySum = 0;

	cout << "�� ������ �Է��ϼ���: ";
	cin >> year;
	cout << "�� ������ �Է��ϼ���: ";
	cin >> month;
	cout << "��ĥ���� �Է��ϼ���: ";
	cin >> dayMth;

	//��
	switch (month-1)
	{
	case 12:
		daySum += 31;
	case 11:
		daySum += 30;
	case 10:
		daySum += 31;
	case 9:
		daySum += 30;
	case 8:
		daySum += 31;
	case 7:
		daySum += 31;
	case 6:
		daySum += 30;
	case 5:
		daySum += 31;
	case 4:
		daySum += 30;
	case 3:
		daySum += 31;
	case 2:
		daySum += 28 + (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? 1 : 0);
	case 1:
		daySum += 31;
	default:
		//1������ �⺻��
		daySum += dayMth;
	}

	cout << "\n������ " << daySum << "��° ���Դϴ�." << endl;

	return 0;
}