#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	unsigned int daySum, dayFirst;
	do
	{
		cout << "�� ���� ��¥ ���� �Է��ϼ���(28, 29, 30, 31): ";
		cin >> daySum;
	} while (daySum < 28 || daySum > 31);
	//����� ���忡�� �� �� �Է��ϸ� dowhile�� ����. ��ǻ�� ���忡���� �ùٸ� �� �Է��ϸ� ����.
	do
	{
		cout << "ù ���� ������ �Է��ϼ���(0~6): ";
		cin >> dayFirst;
	} while (dayFirst < 0 || dayFirst>6);

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
		//(++weekCnt) : ���� �����ϰ� ���� ������ �Ҵ翬���� ���� ��.
		if ((++weekCnt) % 7 == 0)
		{
			cout << endl;
			weekCnt = 0;
		}
	}

	return 0;
}