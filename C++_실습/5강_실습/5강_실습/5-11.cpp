/*
�Է��Ѽ��� ����� ���ϴ� ���α׷��̴�.
�� �ٿ� 5���� ����Ѵ�.
unsigned int num �ڿ����� �Էµ��� �����Ѵ�.
�Ҽ��� �Ҽ��� ����Ѵ�.
1�� ������� �ʴ´�.
num1 num2
while (!(num2 == 0))
temp num2
num2 = num1 % num2
num1 temp

num�ڿ���
253
int numCnt = 0;
for �� (1<=~<=num) cnt
	if (num % cnt == 0 && cnt != num)
	else if (num % cnt == 0 && cnt == num)
		if (cntForNum == 1)
			�Ҽ�
		else
			�������� ���
	if (num % cnt == 0)
		numCnt++;
		cout << cnt << " ";
		if (!(numCnt % 5))
			cout << endl;
		bool = 1;
if (!bool)
	num �Ҽ��̴�

*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned int num, numForCnt = 0;
	cout << "���ڸ� �Է����ּ���: ";
	cin >> num;
	for (unsigned int counter{ 2 }; counter <= num; counter++)
	{
		if (num % counter == 0 && counter != num)
		{
			cout << counter << " ";
			numForCnt++;
			if (numForCnt % 5 == 0) cout << endl;
		}
		else if (counter == num)
		{
			if (!numForCnt) cout << num << " ��(��) �Ҽ��Դϴ�." << endl;
			else cout << counter << " ";
		}
	}
	return 0;
}