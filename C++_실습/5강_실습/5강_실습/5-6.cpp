/*
�ΰ��� ������ �Է¹޴´�.
������ ���� �Է��Ѵ�.
int num1, num2;
int numSum = 0;
int size = num2 - num1;
��
for (unsigned int counter {0}; counter <= num2; counter++)
	numSum += (num1 + counter);

cout << numSum

-5 5 (10) (0,1,2,3,...,9,10)
		  (-5,-4,...,4,5)
*/
#include <iostream>
using namespace std;
int main(void)
{
	int num1, num2;
	int numSum = 0;
	cout << "N�� M�� �Է��� �ּ���: ";
	cin >> num1 >> num2;

	for (unsigned int counter{ 0 }; counter <= (num2 - num1); counter++)
	{
		numSum += (num1 + counter);
	}
	cout << num1 << "���� " << num2 << "������ �������� ���� " << numSum << "�Դϴ�." << endl;

	return 0;
}