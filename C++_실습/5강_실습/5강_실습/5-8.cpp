#include <iostream>
using namespace std;
int main(void)
{
	int n;
	do
	{
		cout << "�ڿ��� N�� �Է��� �ּ���: ";
		cin >> n;
	} while (n < 1);

	int m;
	cout << endl << n << "�� ������� Ȯ���� ���ڸ� �Է��� �ּ���: ";
	while (cin >> m) //�Էµ� ���� ��ȯ�Ѵ�.
	{
		if (m > 0)
		{
			if (m % n == 0)
			{
				cout << m << "��(��) " << n << "�� ����Դϴ�." << endl << endl;
			}
			else
			{
				cout << m << "��(��) " << n << "�� ����� �ƴմϴ�." << endl << endl;
			}
		}
		cout << n << "�� ������� Ȯ���� ���ڸ� �Է��� �ּ���: ";
	}
	cout << "while�� ��: " << m << endl;
	return 0;
}