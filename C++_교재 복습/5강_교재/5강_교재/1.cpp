#include <iostream>
#include <iomanip>
using namespace std;
/*
int�� ���� �ϳ��� �Է¹���
4���� �Է��� ���� cin�� �ƴ϶� while������ ����
�������� ����� ����� double������ �Ҽ��� ���� 2��°�ڸ����� �����.
����, count���� ����
*/
int main(void)
{
	int numInt;
	int numSum = 0;
	double numAvg;
	int cnt = 0;

	while (cnt < 4)
	{
		cout << "������ �ϳ� �Է��ϼ���(0~100�� ����): ";
		cin >> numInt;
		numSum += numInt;
		cnt += 1; //cnt++ or ++cnt
	}
	numAvg = static_cast<double>(numSum) / 4.0;
	cout <<fixed << setprecision(2) << "��� ����: " << numAvg << endl;
	return 0;
}