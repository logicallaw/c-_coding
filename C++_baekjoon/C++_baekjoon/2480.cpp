#include <iostream>
/*
1~6 �ֻ��� 3���� ������ ������ ���� ���� ���� ����� �޴´�.
*/
using namespace std;
int main(void)
{
	unsigned int a, b, c;
	unsigned int maxN;
	cin >> a >> b >> c;
	if (a == b)
	{
		if (a == c)
		{
			cout << (10000 + a * 1000);
		}
		else
		{
			cout << (1000 + a * 100);
		}
	}
	else if (a == c)
	{
		cout << (1000 + a * 100);
	}
	else
	{
		if (b == c)
		{
			cout << (1000 + b * 100);
		}
		else
		{
			maxN = (a > b) ? a : b;
			maxN = (maxN > c) ? maxN : c;
			cout << (maxN * 100);
		}
	}
	return 0;
}