/*
���� ������ �������� ��ȯ�Ͽ� ����ϴ� ���α׷��̴�.
13 % 2 = 1 10
6 % 2 = 0 0
3 % 2 = 1 1
1 % 2 = 1
int num;
cin >> num;
int temp = 0;

temp +=  (num % 2) * pow(2, cnt);
num = num / 2;

func1(num,x = 0)
if (num == 0) return 0;
	return (num % 2) * pow(2,x) + func1(num / 2, x+1);
*/
#include <iostream>
#include <cmath>
using namespace std;

int f1(int num, int cnt = 0);

int main(void)
{
	int number;
	cout << "���� ������ �Է��ϼ���: ";
	cin >> number;

	cout << number << "�� ������ ǥ��: " << f1(number) << endl;
	return 0;
}

int f1(int num, int cnt)
{
	if (num == 0) return 0;
	return (num % 2) * pow(10, cnt) + f1(num / 2, cnt + 1);
}