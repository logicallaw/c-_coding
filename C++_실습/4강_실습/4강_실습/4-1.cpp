#include <iostream>
#include <iomanip>
//������ �ּ�/�ִ븦 ã�� �̵��� ����� �л��� ������ ����ϴ� ���α׷��̴�.
//0���� 100������ unsigned int���� ���δٸ� ������ �Է¹޴´�.
using namespace std;
int main(void)
{
	unsigned int num1, num2, num3;
	unsigned int minN, maxN;
	unsigned int sumN;
	double avgN;
	cout << "ù ��° ���� �Է�: ";
	cin >> num1;
	cout << "�� ��° ���� �Է�: ";
	cin >> num2;
	cout << "�� ��° ���� �Է�: ";
	cin >> num3;

	maxN = (num1 > num2) ? num1 : num2;
	maxN = (maxN > num3) ? maxN : num3;

	minN = (num1 < num2) ? num1 : num2;
	minN = (minN < num3) ? minN : num3;

	sumN = minN + maxN;
	avgN = sumN / 2.0;

	/*
	�Ǽ� ����Ʈ
	1.�� ���� ��½� ������ ������ ������.
	2.�ݿø� ����ؾߵ�. �ݿø��� double���̸鼭 setprecision�� �ؾߵ�.
	*/


	cout << "\n�Է��� ���� = " << num1 << " " << num2 << " " << num3 << endl;
	cout << "�ּ� ������ �ִ� ���� = " << minN << " " << maxN << endl;
	cout << "�л��� ���� = " << fixed << setprecision(0)<<avgN << endl;

	return 0;
}