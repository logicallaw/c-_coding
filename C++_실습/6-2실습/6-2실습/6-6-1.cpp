#include <iostream>
using namespace std;

int fx(int func, int x, int mulx = 1);

int main(void)
{
	cout << "�Լ��� �Է����ּ���: ";
	long long f;
	cin >> f;
	cout << "x���� �Է��� �ּ���: ";
	int x;
	cin >> x;
	cout << "�Լ����� " << fx(f, x) << "�Դϴ�." << endl;

	return 0;
}

int fx(int func, int x, int mulx)
{
	if (func == 0) return 0;
	else return (func % 10) * mulx + fx(func / 10, x, mulx * x);
}