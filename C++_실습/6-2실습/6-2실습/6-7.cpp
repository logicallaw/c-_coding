#include <iostream>
using namespace std;

int func1(int x, int y);

int main(void)
{
	int x, y;
	do
	{
		cout << "����� ������ ��ġ�� �Է����ּ���(N��° �� M��° ����): ";
		cin >> x >> y;
	} while (!((x>=y)&&(x<=25)&&(y>=1)));
	int result;
	result = func1(x - 1, y-1);

	cout << x << "��° ���� " << y << "��° ���ڴ� " << result << "�Դϴ�." << endl;
}

int func1(int n, int m)
{
	if (m == 0) return 1;
	else if (n == m) return 1;
	else return func1(n - 1, m - 1) + func1(n - 1, m);
}