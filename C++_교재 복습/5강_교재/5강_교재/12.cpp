/*
unsigned int���� �Ѵ����ϼ�(daySum)�� unsigned int ù���� ����(dayFirst)�� �Է¹޴´�.
do~while���� ����Ͽ� �޷��� �ϼ��� ����Ѵ�.
��
���ٿ� 7������ ����
���ʺ��� 0~6������ ����
ù���� ����
:3�̸� 0' ',1,2,3ä���(������� ���) ������� 7�� �ϼ��Ǹ� ������, 7�� �ϼ��Ǹ� �������ؼ�
:4 ' ',1,2,3
ù���� ������ ������
�� ������ X
unsigned int weekCnt = dayFirst;
weekCnt % 7 == 0
	cout << endl;
(else)
	X

dayFirst ��ŭ -->���� ä���.-->1���� ���ʴ�� ���(unsigned int dayCnt = 1; dayCnt <= daySum; dayCnt++)

for (unsigned int dayToFirst = 0; dayToFirst<dayFirst; dayToFirst++)
{
	cout << setw(4) << " ";
}

dayCnt
weekCnt % 7 == 0�� �Ǹ� ������(endl)
�������ϱ��� ä���.


setw(4)-iomanip
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	unsigned int daySum, dayFirst;
	cout << "�� ���� ��¥ ���� �Է��ϼ���(28, 29, 30, 31): ";
	cin >> daySum;
	cout << "ù ���� ������ �Է��ϼ���(0~6): ";
	cin >> dayFirst;

	cout << "\nSun Mon Tue Wed Thr Fri Sat";
	cout << "\n--- --- --- --- --- --- ---" << endl;
	for (unsigned int dayToFirst = 0; dayToFirst < dayFirst; dayToFirst++)
	{
		cout << setw(4) << " ";
	}

	unsigned int weekCnt = dayFirst;

	for (unsigned int dayCnt = 1; dayCnt <= daySum; dayCnt++)
	{
		cout << setw(3) << right << dayCnt << " ";
		weekCnt += 1;
		if (weekCnt % 7 == 0)
		{
			cout << endl;
			weekCnt = 0;
		}
	}

	return 0;
}