/*
�ֻ����� ���� ������ ����
����� ���α׷��� ���
ù �õ����� 7 or 11������ �¸�, 2,3,12������ �й�
ù �õ����� �� ���ڵ� �ȳ����� ù�õ����� ���� ���ڰ�
���Ŀ� ���� ������ �¸�. ���࿡, 7�� ���� ������ �й�.
rollDice�Լ��� �ΰ��� �ֻ����� ���� ���� �� ���� �� �ִ� �Լ�.

int main(void)
	int a = roolDice(void);
	int temp = 0;
	bool aBool = 0;
	if (a == 7 || a == 11)
		�¸�
		aBool = 1;
	else if (a == 2 || a == 3 || a == 12)
		�й�
		aBool = 1;

	while (!(temp == a || temp == 7) && aBool == 0)
		temp = roolDice();
	
	if (temp == a)
		�¸�
	else if (temp == 7)
		�й�

int rollDice(void);
int rollDice(void)
	������ �̿��� ������ 1~6�� �� ����
	srand(time(0)) //�������� ���� �ð����� �õ� �Ҵ���.
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	cout << "Player rolled " << a << " + " << b << " = " << a + b << endl;
	return a + b;
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int roolDice(void);

int main(void)
{
	srand(time(0));
	int numFirst = roolDice();
	int numTemp = 0;
	bool numBool = 0;
	if (numFirst == 7 || numFirst == 11)
	{
		cout << "\nPlayer wins" << endl;
		numBool = 1;
	}
	else if (numFirst == 2 || numFirst == 3 || numFirst == 12)
	{
		cout << "\nPlayer loses" << endl;
		numBool = 1;
	}
	else
	{
		cout << "\nPoint is " << numFirst << endl;
	}
	while (!(numFirst == numTemp || numTemp == 7) && numBool == 0)
	{
		numTemp = roolDice();
	}
	if (numTemp == numFirst)
	{
		cout << "\nPlayer wins" << endl;
	}
	else if (numTemp == 7)
	{
		cout << "\nPlayer loses" << endl;
	}

}

int roolDice(void)
{
	int a, b;
	//������ �̿��� ������ 1~6�� �� ����
    //�������� ���� �ð����� �õ� �Ҵ���.
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	cout << "Player rolled " << a << " + " << b << " = " << a + b << endl;

	return (a + b);
}
