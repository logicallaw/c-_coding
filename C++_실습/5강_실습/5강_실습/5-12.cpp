/*
���� ������ �Էµ��� �����Ѵ�
-1�� �ԷµǸ� ���α׷��� ����ȴ�
���� ����� ����Ѵ�.
516 0+6*
	0+6*(num/10)
	counter = 1;
while ���ڸ������� Ȯ�� counter (num)
num / 10
512
51/5/0
counter *= 10 ; counter = 3


512 100 200
51 10 100
5 1 5
0 

{result = result + (num%10) * (counter)
counter /= 10;
num = num / 10;}
*/
#include <iostream>
using namespace std;
int main(void)
{
	int promptN;
	do
	{
		unsigned int num, counter = 1, numReverse = 0, temp;
		//�Է��� �޴´�.
		cout << "���� ������ �Է��ϼ���(����� -1): ";
		cin >> promptN;
		num = promptN;
		temp = num;
		//�� �ڸ��� Ȯ���Ѵ�.
		while (temp > 10)
		{
			temp /= 10;  //87,8,0
			counter *= 10;
		}
		//���� �����´�.
		while (num)
		{
			numReverse += ((num % 10) * counter); //876 1000
			counter /= 10;
			num /= 10;
		}
		if (promptN != -1) cout << "������ ���: " << numReverse << endl;
	} while (!(promptN == -1));

}