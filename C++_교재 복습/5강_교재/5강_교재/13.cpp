#include <iostream>
/*
int num;
unsigned int result;
���� �ƴ� ������ �Է��� �޴´�.
�߸��Է¹����� �ٽ� �Է¹ް� �Ѵ�.(do~while)
�Էµ� ������ �޾� ���� ������ ���ڸ� ����ϰ� �Ѵ�.
��
1.10���� ����� �����ڸ��� �ɶ����� ���Ѵ�.
2.

do
{
	num /= 10;
	a = num % 10;
} while ( a > 9 );
cout << "���� ������ ���� = " << num << endl;
return 0;
516 / 10 =
50
5 / 10 = 0~9

11 / 10 = 1

(num % 10) > 9

*/
using namespace std;
int main(void)
{
	int num;
	do
	{
		cout << "������ �ƴ� ������ �Է��ϼ���: ";
		cin >> num;
	} while (num < 0);

	do
	{
		num /= 10;
	} while (num > 9);
	cout << "���� ������ ���� = " << num << endl;
	return 0;
}