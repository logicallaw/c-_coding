#include <iostream>
using namespace std;
//unsigned int ��,��,�� �Է¹޴´�.
//unsigned int result ����Ѵ�.
/*
��
year�� ���� �Ǵ�--bool
month�� switch �Ʒ� ����
month�� ���� day������ ���Ѵ�.
swtich������ �� ���� �� ������
12:2�� ������ 6��.
11:2�� ������ 5��.
2,4,6,8,10
1,3,5,7,9,11

2,4,6,8,10
1,3,5,7,9
//2���� ���Խ�Ű�� 2�� �߰���. 2�� ���� �������� �Ǵ�.

(year % 2 == 0)
	���� ¦���� result = ¦�� 30x(��-1) + Ȧ�� 31x�� + dayMth;
(else)
	���� Ȧ���� result = ¦�� 30x(��) + Ȧ�� 31x(��-1) + dayMth;

¦���� Ȧ���� result += ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? 1 : 0;


(���� == 1)
	2���� 29��
(else)
	2���� 28�� (�״�)

5 / 2 -->2
2,4
1,3

7 / 2 --->3
2,4,6
1,3,5

11 / 2 -- 5
2,4,6,8,10
1,3,5,7,9
�⺻ ��
1,3,5,7,9,11�� 31��
4,6,8,10,12�� 30��


*/
int main(void)
{
	unsigned int year, month, dayMth;
	unsigned int monthS;
	unsigned int daySum;

	cout << "�� ������ �Է��ϼ���: ";
	cin >> year;
	cout << "�� ������ �Է��ϼ���: ";
	cin >> month;
	cout << "��ĥ���� �Է��ϼ���: ";
	cin >> dayMth;
	
	monthS = (month / 2);

	//month bool�� ���� ���� if���� ������ result�� ����Ѵ�.
	if (month % 2 == 0) daySum = ((30 * (monthS - 1)) + (31 * monthS) + dayMth);
	else daySum = ((30 * monthS) + (31 * monthS) + dayMth);

	//month�� 1���� ũ�� ������ ���ο� ���� 1�� ������ �����Ѵ�.
	//�̶�, ������ 2������ 30�Ϸ� ���Խ��� ���ؼ� true�� 1 + (-2), false�� +(-2)�Ѵ�.
	if (month > 1) daySum += (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? -1 : -2);

	cout << "\n������ " << daySum << "��° ���Դϴ�." << endl;

	return 0;
}