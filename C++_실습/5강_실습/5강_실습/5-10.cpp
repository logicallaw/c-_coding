/*
int size �ݺ� Ƚ�� �Է¹޴´�.
�� Ƚ������ ���ڸ� �Է¹޴µ�
���� �ƴ� ������ �Է¹޴´�.
���� �ԷµǸ� �ٽ� �Է� ��û�Ѵ�.
�� �ڸ����� ���� result����Ѵ�.

��
0�̻��� ���� ���� �Է¹޴µ�
�� �ڸ����� ���� �˾ƾ��Ѵ�.
���ڸ����� �����ϰ� ���ڸ����� �����ϴ�.
10���� ����� 9���� �۰ų� ���� ������ �������.
���� 123�� �ԷµǸ� 10���� ����� 12�� �ǰ� 10���� ������ 1�̵ȴ�. 12+
625 10���� ������ �� 62�̰� 62�� 10���� ������ 6�� �ȴ�. �����ڸ����� 625-600=25
8765 10/ 876�� �ȴ�. 87�� �ȴ�. 8�� �ȴ�.

876

unsigned int numSum = 0;
cin >> num;
while(num<10)
	numSum += (num - (num/10)*10);
	num = (num/10);
*/
#include <iostream>
using namespace std;
int main(void)
{
	int size;
	int num;
	do
	{
		cout << "�Է¹��� ������ ������ �Է��� �ּ���: ";
		cin >> size;
	} while (size < 1); //�ڿ����� ����

	int counter = 0;
	int numSum = 0;
	while (counter < size)
	{
		cout << counter + 1 << "��° ���ڸ� �Է����ּ���: ";
		cin >> num;
		if (num < 0)
		{
			continue;
		}
		counter++;
		while (num)
		{
			numSum += num % 10;
			num /= 10;
		}
	}
	cout << endl << size << "���� ������ �� �ڸ��� ��: " << numSum << endl;

	return 0;
}