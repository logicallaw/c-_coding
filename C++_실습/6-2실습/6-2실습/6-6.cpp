/*
����Լ��� �̿��� ������ �Լ����� ���Ѵ�.
�����Լ�f(x)
����� ���޾� �Է��Ѵ�.

int main(void)
	int num;
	cin >> num;
	int size = 0;
	int temp;

	int numm = num;
	//������ �������� �ڸ��� ���Ѵ�
	while(num != 0) //144
		temp = num % 10; //4;4;1
		num = num /10;//14;1;0
		size++; 
	cin >> x;

	int result = 0;
	for (int cnt {0}; cnt < size; cnt++)
		temp = numm % 10;
		result += (temp * func1(x, cnt));
		num = numm / 10;

�Էµ� ����
������ �������� cntī��Ʈ �� �� �ִ�.
func1(int x, int n)//�����ؼ� �Լ��� ���Ѵ�.
	if (n == 0) return 1;
	return x * func1(n-1);
*/
#include <iostream>
using namespace std;

int func1(int x, int y);

int main(void)
{
	int num1, x;
	cout << "�Լ��� �Է��� �ּ���: ";
	cin >> num1;
	cout << "x���� �Է��� �ּ���: ";
	cin >> x;
	
	int num2 = num1;
	int size = 0;

	int temp;

	//������ �������� size�� �����Ѵ�.
	while (num1 != 0)
	{
		temp = num1 % 10;
		num1 = num1 / 10;
		size++;
	}

	int result = 0;
	for (int cnt{ 0 }; cnt < size; cnt++)
	{
		temp = num2 % 10;
		result += (temp * func1(x, cnt));
		num2 = num2 / 10;
	}

	cout << "�Լ����� " << result << "�Դϴ�." << endl;

	return 0;
}

int func1(int x, int n)//�����ؼ� �Լ��� ���Ѵ�.
{
	if (n == 0) return 1;
	else return x * func1(x, n - 1);
}