#include <iostream>
using namespace std;
int main(void)
{
	int fibs[20];
	int numSum = 0;
	fibs[0] = 0;
	fibs[1] = 1;

	for (int i{ 2 }; i < 20; i++ )
	{
		fibs[i] = fibs[i - 2] + fibs[i - 1];
	}

	for (int i{ 19 }; i >= 0; i--)
	{
		cout << i + 1 << "��° ��: " << fibs[i] << endl;
	}

	for (int fib : fibs)
		numSum += fib;
	
	cout << endl << "�Ǻ���ġ ������ 1�׺��� 20�ױ����� ���� " << numSum << "�Դϴ�.";

	return 0;
}