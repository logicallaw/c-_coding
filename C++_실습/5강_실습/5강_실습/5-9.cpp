/*
1���� ���������� ���� X���� 1.2����
�׸��� 20/100�� 0.02�� �ƴ϶� 0.2��.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int n;
	double inp;
	cout << "N���� 1�Ⱓ ������·�(%)�� �Է��� �ּ���: ";
	cin >> n >> inp;

	double exp, result = 1;
	exp = 1 + inp / 100;
	for (int i = 0; i < n; i++)
	{
		result *= exp;
	}
	cout << fixed << setprecision(3);
	cout << n << "��� ����: ���� ������ " << result << "��" << endl;

	return 0;
}