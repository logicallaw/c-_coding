/*
func1(int n)
if n == 0 return 2048;
else return (3/4) * func1(n-1);
*/
#include <iostream>
#include <iomanip>
using namespace std;

double func1(int n);

int main(void)
{
	int num;
	cout << "�ÿ����ɽ�Ű �ﰢ���� �ܰ踦 �Է��� �ּ���(0�ܰ��� ���̴� 2048�Դϴ�.) : ";
	cin >> num;
	cout << num << "�ܰ� �ÿ����ɽ�Ű �ﰢ���� ���̴� " << func1(num) << "�Դϴ�." << endl;

	return 0;
}

double func1(int n)
{
	if (n == 0) return 2048;
	else return func1(n-1) * 3 / 4;
}